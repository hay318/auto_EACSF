#!/tools/Python/Python-2.7.3/bin/python2.7
##	by Hailey (Han Bit) Yoon (email: hanbit.yoon@gmail.com)
######################################################################################################### 

from __future__ import print_function
import os
import sys
import subprocess

def main(argv):

	Coronal_70Mask = '@T1IMG@'
        PRE_VENT_MASK = '@VENTRICLE_MASK@'
	PRE_CEREBELLUM_MASK = '@CEREB_MASK@'
	Segmentation = '@TISSUE_SEG@'
	OUT_PATH = '@OUTPUT_DIR@'
	
	Coronal_70Mask_dir = os.path.dirname(Coronal_70Mask)
	Coronal_70Mask_base = os.path.splitext(os.path.basename(Coronal_70Mask))[0]
	PRE_VENT_MASK_dir = os.path.dirname(PRE_VENT_MASK)
	PRE_VENT_MASK_base = os.path.splitext(os.path.basename(PRE_VENT_MASK))[0]
	PRE_CEREBELLUM_MASK_dir = os.path.dirname(PRE_CEREBELLUM_MASK)
	PRE_CEREBELLUM_MASK_base = os.path.splitext(os.path.basename(PRE_CEREBELLUM_MASK))[0]
	Segmentation_dir = os.path.dirname(Segmentation)
        Segmentation_base = os.path.splitext(os.path.basename(Segmentation))[0]
	
	######### Cutting lateral ventricle ###00###
	MID_TEMP00 = os.path.join(OUT_PATH, "".join([Coronal_70Mask_base,"_MID00.nrrd"]))
	args=['ImageMath', Segmentation, '-outfile', MID_TEMP00, '-mul', PRE_VENT_MASK]
        print(" ".join(args))
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        out, err = imgmath.communicate()
        print(out)
        if(err):
            print(err, file=sys.stderr)

	######### Cutting below AC-PC line ####### 	
   	MID_TEMP01 = os.path.join(OUT_PATH,"".join([Segmentation_base,"_MID01.nrrd"])) 
	MID_TEMP02 = os.path.join(OUT_PATH,"".join([Segmentation_base,"_MID02.nrrd"]))
	MID_TEMP03 = os.path.join(OUT_PATH,"".join([Segmentation_base,"_MID03.nrrd"])) 

	args=['ImageMath', MID_TEMP00, '-outfile', MID_TEMP01, '-mul', Coronal_70Mask]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()
	#errcode = imgmath.returncode
	#print(out, err, errcode)

	args=['ImageMath', MID_TEMP01, '-outfile', MID_TEMP02, '-extractLabel', '3']
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', MID_TEMP02, '-outfile', MID_TEMP02, '-sub', PRE_CEREBELLUM_MASK]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', MID_TEMP02, '-outfile', MID_TEMP02, '-threshold', '1,1']
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', MID_TEMP02, '-outfile', MID_TEMP03, '-conComp','1']
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	######### Make thin mask for preserving outter 2nd or 3rd fracrtion csf ##########
	BRAIN_MASK = os.path.join(OUT_PATH,'Brain_Mask.nrrd')
	BRAIN_MASK_ERODE = os.path.join(OUT_PATH,'Brain_Mask_Erode.nrrd')
	THIN_MASK = os.path.join(OUT_PATH,'Brain_Thin_Mask.nrrd')
	
	args=['ImageMath', Segmentation, '-threshold', '1,4', '-outfile', BRAIN_MASK]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', BRAIN_MASK, '-erode', '6,1', '-outfile', BRAIN_MASK_ERODE]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', BRAIN_MASK, '-sub', BRAIN_MASK_ERODE, '-outfile', THIN_MASK]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	args=['ImageMath', THIN_MASK, '-mul', Coronal_70Mask, '-outfile', THIN_MASK]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()

	########## Find outer CSF in thin mask and added this csf to extra CSF #############
	PRESERVED_OUTERCSF = os.path.join(OUT_PATH,'Preserved_OuterCSF.nrrd')
	FINAL_OUTERCSF = os.path.join(OUT_PATH, "".join([Segmentation_base,"_extCSF.nrrd"]))
	FINAL_OUTERCSF_dir = os.path.dirname(FINAL_OUTERCSF)
	FINAL_OUTERCSF_base = os.path.splitext(os.path.basename(FINAL_OUTERCSF))[0]
	
	args=['ImageMath', MID_TEMP02, '-outfile', PRESERVED_OUTERCSF, '-mul', THIN_MASK]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()
        print(out,err)

        args=['ImageMath', MID_TEMP03, '-outfile', FINAL_OUTERCSF, '-add', PRESERVED_OUTERCSF]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()
        print(out,err)
	
	args=['ImageMath', FINAL_OUTERCSF, '-outfile', FINAL_OUTERCSF, '-threshold', '1,2']
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()
        print(out,err)

	args=['ImageStat', FINAL_OUTERCSF, '-label', FINAL_OUTERCSF, '-outbase', 
		os.path.join( FINAL_OUTERCSF_dir, "".join([FINAL_OUTERCSF_base,"_volume.txt"]))]
        imgmath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = imgmath.communicate()
        print(out,err)

        print("Auto_EACSF finished")
	sys.exit(0);

if (__name__ == "__main__"):
	main(sys.argv)

