#!/tools/Python/Python-2.7.3/bin/python2.7
##	by Hailey (Han Bit) Yoon (email: hanbit.yoon@gmail.com)
######################################################################################################### 

import sys
import os
import subprocess
from optparse import OptionParser

def main(opts, argv):

        T1 = '@STRIPPED_CORRECTED_EMS@'
        SEG = '@TISSUE_SEG@'
	
	T1_dir=os.path.dirname(T1)
	T1_base=os.path.splitext(os.path.basename(T1))[0]
	SEG_dir=os.path.dirname(SEG)
	SEG_base=os.path.splitext(os.path.basename(SEG))[0]
	
	SEG_WithoutVent = os.path.join(T1_dir, "".join([T1_base,"_withoutVent.nrrd"]))	
	PATH = './'

	ATLAS = os.path.join(PATH, "atlas_T1_sym_stripped_RAI-byte.nrrd")
	VENT_MASK = os.path.join(PATH, "Vent_CSF-BIN-RAI-Fusion_INV.nrrd")

	OUT_VENT_MASK = os.path.join(T1_dir, "".join([T1_base,"_AtlasToVent.nrrd"]))
	ANTs_MATRIX_NAME=os.path.join(T1_dir, T1_base)
	ANTs_WARP = os.path.join(T1_dir, "".join([T1_base,"_Warp.nii.gz"]))
	ANTs_AFFINE = os.path.join(T1_dir, "".join([T1_base,"_Affine.txt"]))
	
	os.system('ANTS 3 -m CC\\[%s, %s,1,4\\] -i 100x50x25 -o %s -t SyN\\[0.25\\] -r Gauss\\[3,0\\]' %(T1, ATLAS, ANTs_MATRIX_NAME) )
	#args=['ANTS', '3', '-m', 'CC\\[', T1, ATLAS, '1', '4', '\\]', '-i', '100x50x25', '-o', ANTs_MATRIX_NAME, '-t', 'SyN\\[0.25\\]', '-r', 'Gauss\\[3,0\\]']
        #ants = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	#out, err = ants.communicate()
	
	args=['WarpImageMultiTransform', '3', VENT_MASK, OUT_VENT_MASK, ANTs_WARP, ANTs_AFFINE, '-R', T1, '--use-NN']
        warpImg = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = warpImg.communicate()

	args=['ImageMath', SEG, '-mul', OUT_VENT_MASK, '-outfile', SEG_WithoutVent]
        ImgMath = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = ImgMath.communicate()


if (__name__ == "__main__"):
	parser = OptionParser(usage="%prog t1w.nrrd t2w.nrrd [options]")
	parser.add_option("-k","--keepMidResults",action="store_false", dest="verboseKeep", default=True, help="Keep mid/temp results")
	parser.add_option("-o","--OTSU",action="store_true", dest="verboseOTSU", default=False, help="apply otsu using ImageMath")
	parser.add_option("-v",action="store", dest="VISIT",type="string", help="Visit (e.g. V12, V24..)",default="")
	(opts, argv) = parser.parse_args()	
	main(opts, argv)
