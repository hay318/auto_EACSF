#!/tools/Python/Python-2.7.3/bin/python2.7
##	by Hailey (Han Bit) Yoon (email: hanbit.yoon@gmail.com)
#########################################################################################################  

import sys
import os
import subprocess
from optparse import OptionParser

def main(opts, argv):
        T1 = '@T1_RAI_BIAS@'
        T2 = '@T2_RAI_BIAS@'
	
	T1_dir = os.path.dirname(T1)
	T1_base = os.path.splitext(os.path.basename(T1))[0]
	T2_dir = os.path.dirname(T2)
	T2_base = os.path.splitext(os.path.basename(T2))[0]

	##--> convert *.nrrd to *.nii.gz
	Input_T1_NII = os.path.join(T1_dir, "".join([T1_base,".nii.gz"]))	
	Input_T2_NII = os.path.join(T2_dir, "".join([T2_base,".nii.gz"]))	

	#Input_AutoSeg_Mask =argv[2]
	args=['convertITKformats', T1, Input_T1_NII]
        ITK = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ITK.communicate()

	args=['convertITKformats', T2, Input_T2_NII]
        ITK = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ITK.communicate()

	T1_Only_Mask = os.path.join(T1_dir, "".join([T1_base,"_T1only"]))
	T2_Only_Mask = os.path.join(T2_dir, "".join([T2_base,"_T2only"]))	

	##--> T2 Jointly T1 (FSL BET)
	T2_Joint_T1_Mask = os.path.join(T1_dir, "".join([T1_base,"_T2JointT1_mask.nii.gz"]))
	T2_Joint_T1_Mask1 = os.path.join(T1_dir, "".join([T1_base,"_T2JointT1_tmp1"]))
	T2_Joint_T1_Mask2 = os.path.join(T1_dir, "".join([T1_base,"_T2JointT1_tmp2"]))
	
	os.system('bet %s %s -f 0.52 -g 0.2 -m -n -A2 %s -R ' %(Input_T2_NII,T2_Joint_T1_Mask1,Input_T1_NII) )
	os.system('bet %s %s -f 0.52 -g -0.2 -m -n -A2 %s -R ' %(Input_T2_NII,T2_Joint_T1_Mask2,Input_T1_NII) )
	#args=['bet', Input_T2_NII, T2_Joint_T1_Mask1,'-f','0.52','-g','0.2','-m','-n','-A2',Input_T1_NII,'-R ']
        #bet = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	#out, err = bet.communicate()

	#args=['bet', Input_T2_NII, T2_Joint_T1_Mask2,'-f','0.52','-g','-0.2','-m','-n','-A2',Input_T1_NII,'-R ']
        #bet = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	#out, err = bet.communicate()
	
	T2_Joint_T1_Mask1 = os.path.join(T2_Joint_T1_Mask1, "_mask.nii.gz")	
	T2_Joint_T1_Mask2 = os.path.join(T2_Joint_T1_Mask2, "_mask.nii.gz")	

	args=['ImageMath', T2_Joint_T1_Mask1, '-add', T2_Joint_T1_Mask2, '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	args=['ImageMath', T2_Joint_T1_Mask, '-threshold', '1,2', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	args=['ImageMath', T2_Joint_T1_Mask, '-dilate', '1,1', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	args=['ImageMath', T2_Joint_T1_Mask, '-erode', '1,1', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	Input_T1_NII_255 = os.path.join(T1_dir, "".join([T1_base,"_255.nii.gz"]))
	Pre_SkullMask = os.path.join(T1_dir, "".join([T1_base,"_255_Skull.nii.gz"]))

	args=['ImageMath', Input_T1_NII, '-rescale', '0,255', '-outfile', Input_T1_NII_255]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()
	
	args=['ImageMath', Input_T1_NII_255, '-threshold', '0,240', '-outfile', Pre_SkullMask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()
	
	args=['ImageMath', T2_Joint_T1_Mask, '-mul', Pre_SkullMask, '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	args=['ImageMath', T2_Joint_T1_Mask, '-erode', '1,1', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()
	
	args=['ImageMath', T2_Joint_T1_Mask, '-dilate', '1,1', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()
 	
	args=['ImageMath', T2_Joint_T1_Mask, '-conComp', '1', '-outfile', T2_Joint_T1_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()
	
	for i in range(0,2):
		args=['ImageMath', T2_Joint_T1_Mask, '-dilate', '1,1', '-outfile', T2_Joint_T1_Mask]
       		ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
		out, err = ImgMath.communicate()
		
		args=['ImageMath', T2_Joint_T1_Mask, '-erode', '1,1', '-outfile', T2_Joint_T1_Mask]
       		ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
		out, err = ImgMath.communicate()
	
	##--> IBIS 1yr or 6m T1 only (ANTs Warp)
	ATLAS_PATH = './over6m/'
	
	ATLAS = os.path.join(ATLAS_PATH,"template.gipl")
	ATLAS_MASK = os.path.join(ATLAS_PATH, "EDITEDmask2.nrrd")

	ANTs_MATRIX_NAME = os.path.join(T1_dir, T1_base)
	ANTs_WARP = os.path.join(ANTs_MATRIX_NAME, "Warp.nii.gz")
	ANTs_AFFINE = os.path.join(ANTs_MATRIX_NAME, "Affine.txt")
	T1_Only_Mask = os.path.join(T1_dir, "".join([T1_base,"_T1Only_mask.nii.gz"]))	
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T1_NII,ATLAS,ANTs_MATRIX_NAME ) ) ## HOW
	args=['WarpImageMultiTransform', '3', ATLAS_MASK,T1_Only_Mask,ANTs_WARP,ANTs_AFFINE, '-R', Input_T1_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()

	##--> NIPD 4yr T2 only (ANTs Warp)
	T2_ATLAS = os.path.join(ATLAS_PATH, "nihpd_asym_44-60_t2w-RAI.gipl")
	T2_ATLAS_MASK =  os.path.join(ATLAS_PATH, "nihpd_asym_44-60_t2w_mask-RAI_RachelEdits.gipl")
	ANTs_MATRIX_NAME_T2 =  os.path.join(T2_dir, T2_base)	
	ANTs_WARP_T2 = os.path.join(ANTs_MATRIX_NAME_T2, "Warp.nii.gz")
	ANTs_AFFINE_T2 = os.path.join(ANTs_MATRIX_NAME_T2, "Affine.txt")
	T2_Only_Mask =  os.path.join(T2_dir, "".join([T2_base,"_T2Only_mask.nii.gz"]))	
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T2_NII,T2_ATLAS,ANTs_MATRIX_NAME_T2 ) )
	args=['WarpImageMultiTransform', '3', T2_ATLAS_MASK,T2_Only_Mask,ANTs_WARP_T2,ANTs_AFFINE_T2, '-R', Input_T2_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()	

	##--> Colin27 T1 Only (ANTs Warp)
	COLIN_ATLAS_PATH = '/NIRAL/work/shkim/PROJECTS/Proj_caCSF_HanBit/Script/ETC/MASK_STUFF/MNIATLAS/'
	COLIN_ATLAS = os.path.join(COLIN_ATLAS_PATH, "colin27_t1_tal_lin.nrrd")
	COLIN_MASK = os.path.join(COLIN_ATLAS_PATH, "colin27_t1_tal_lin_mask.nrrd")
	COLIN_OUT_MASK = os.path.join(T2_dir, "".join([T2_base,"_Colin27_mask.nrrd"]))	
	ANTs_MATRIX_NAME_COLIN =  os.path.join(T2_dir, "".join([T2_base,"_COLIN"]))	
	ANTs_WARP_COLIN = os.path.join(ANTs_MATRIX_NAME_COLIN, "Warp.nii.gz")
	ANTs_AFFINE_COLIN = os.path.join(ANTs_MATRIX_NAME_COLIN, "Affine.txt")
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T1_NII, COLIN_ATLAS, ANTs_MATRIX_NAME_COLIN ) )
	args=['WarpImageMultiTransform', '3', COLIN_MASK, COLIN_OUT_MASK, ANTs_WARP_COLIN, ANTs_AFFINE_COLIN, '-R', Input_T1_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()
	
	##-->ICBM152 T1 T2 Jointly (ANTs Warp)
	ICMB152_ATLAS_PATH = '/NIRAL/work/shkim/PROJECTS/Proj_caCSF_HanBit/Script/ETC/MASK_STUFF/MNIATLAS/'
	ICMB152_T1_ATLAS = os.path.join(ICMB152_ATLAS_PATH, "mni_icbm152_t1_tal_nlin_sym_09a.nrrd")
	ICMB152_T2_ATLAS = os.path.join(ICMB152_ATLAS_PATH, "mni_icbm152_t2_tal_nlin_sym_09a.nrrd")
	ICMB152_MASK = os.path.join(ICMB152_ATLAS_PATH, "mni_icbm152_t1_tal_nlin_sym_09a_mask.nrrd")
	ICMB152_OUT_MASK = os.path.join(T2_dir, "".join([T2_base,"_ICBM152_mask.nrrd"]))	
	ANTs_MATRIX_NAME_ICMB152 =  os.path.join(T2_dir, "".join([T2_base,"_ICBM152"]))
	ANTs_WARP_ICMB152 = os.path.join(ANTs_MATRIX_NAME_ICMB152, "Warp.nii.gz")
	ANTs_AFFINE_ICMB152 = os.path.join(ANTs_MATRIX_NAME_ICMB152, "Affine.txt")
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T1_NII, ICMB152_T1_ATLAS, Input_T2_NII, ICMB152_T2_ATLAS , ANTs_MATRIX_NAME_ICMB152 ) )
	args=['WarpImageMultiTransform', '3', ICMB152_MASK, ICMB152_OUT_MASK, ANTs_WARP_ICMB152, ANTs_AFFINE_ICMB152, '-R', Input_T1_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()
	
	##--> LargeCSF Case (Autism) T1 T2 Jointly (ANTs Warp)
	BIGCSF_ATLAS_PATH = '/NIRAL/work/shkim/PROJECTS/Proj_caCSF_HanBit/Script/ETC/MASK_STUFF/MulSegAtlas/'
	
	BIGCSF01_T1_ATLAS = os.path.join(BIGCSF_ATLAS_PATH, "stx_5067_004_t3_mprage.nrrd")
	BIGCSF01_T2_ATLAS = os.path.join(BIGCSF_ATLAS_PATH, "stx_5067_004_t3_3DT2.nrrd")
	BIGCSF01_MASK = os.path.join(BIGCSF_ATLAS_PATH, "stx_5067_004_t3_mprage_FinalMask.nrrd")
	BIGCSF01_OUT_MASK = os.path.join(T1_dir, "".join([T1_base,"_BIGCSF01_mask.nrrd"]))	
	ANTs_MATRIX_NAME_BIGCSF01 = os.path.join(T1_dir, "".join([T1_base,"_BIGCSF01"]))	
	ANTs_WARP_BIGCSF01 = os.path.join(ANTs_MATRIX_NAME_BIGCSF01, "Warp.nii.gz")
	ANTs_AFFINE_BIGCSF01 = os.path.join(ANTs_MATRIX_NAME_BIGCSF01, "Affine.txt")
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T1_NII, BIGCSF01_T1_ATLAS, Input_T2_NII, BIGCSF01_T2_ATLAS , ANTs_MATRIX_NAME_BIGCSF01 ) )
	args=['WarpImageMultiTransform', '3', BIGCSF01_MASK, BIGCSF01_OUT_MASK, ANTs_WARP_BIGCSF01, ANTs_AFFINE_BIGCSF01, '-R', Input_T1_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()	

	BIGCSF02_T1_ATLAS = os.path.join(BIGCSF_ATLAS_PATH, "stx_5077_003_t3_mprage.nrrd")
	BIGCSF02_T2_ATLAS = os.path.join(BIGCSF_ATLAS_PATH, "stx_5077_003_t3_3DT2.nrrd")
	BIGCSF02_MASK = os.path.join(BIGCSF_ATLAS_PATH, "stx_5077_003_t3_mprage_FinalMask.nrrd")
	BIGCSF02_OUT_MASK = os.path.join(T1_dir, "".join([T1_base,"_BIGCSF02_mask.nrrd"]))	
	ANTs_MATRIX_NAME_BIGCSF02 =  os.path.join(T1_dir, "".join([T1_base,"_BIGCSF02"]))	
	ANTs_WARP_BIGCSF02 = os.path.join(ANTs_MATRIX_NAME_BIGCSF02, "Warp.nii.gz")
	ANTs_AFFINE_BIGCSF02 = os.path.join(ANTs_MATRIX_NAME_BIGCSF02, "Affine.txt")
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(Input_T1_NII, BIGCSF02_T1_ATLAS, Input_T2_NII, BIGCSF02_T2_ATLAS , ANTs_MATRIX_NAME_BIGCSF02 ) )
	args=['WarpImageMultiTransform', '3', BIGCSF02_MASK, BIGCSF02_OUT_MASK, ANTs_WARP_BIGCSF02, ANTs_AFFINE_BIGCSF02, '-R', Input_T1_NII, '--use-NN']
       	WarpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = WarpImg.communicate()		

	##--> Majority Vote
	Weighted_Majority_Mask = os.path.join(T1_dir, "".join([T1_base,"_wMJ.nii.gz"]))
	args=['ImageMath',Input_T1_NII,'-majorityVoting', T2_Joint_T1_Mask, T1_Only_Mask, T2_Only_Mask, COLIN_OUT_MASK, ICMB152_OUT_MASK, 
		BIGCSF01_OUT_MASK, BIGCSF02_OUT_MASK,'-outfile', Weighted_Majority_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

	TEMP_ERODE_MASK = os.path.join(T1_dir, "".join([T1_base,"_TEMP_ERODE5.nii.gz"]))
	args=['ImageMath',Weighted_Majority_Mask, '-erode', '8,1', '-outfile', TEMP_ERODE_MASK]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()		

	FINAL_MASK = os.path.join(T1_dir, "".join([T1_base,"_FinalMask.nrrd"]))
	args=['ImageMath',Weighted_Majority_Mask, '-dilate', '1,1', '-outfile', Weighted_Majority_Mask]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()	
	
	args=['ImageMath',Weighted_Majority_Mask, '-erode', '1,1', '-outfile', FINAL_MASK]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()

##############################################################################################################

if (__name__ == "__main__"):
	parser = OptionParser(usage="%prog t1w.nrrd t2w.nrrd [options]")
	parser.add_option("-o","--OTSU",action="store_true", dest="verboseOTSU", default=False, help="apply otsu using ImageMath")
	parser.add_option("-v",action="store", dest="VISIT",type="string", help="Visit (e.g. V12, V24..)",default="")
	(opts, argv) = parser.parse_args()	
	main(opts, argv)
