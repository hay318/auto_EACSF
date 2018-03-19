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
	PATH = './'

	T1_dir=os.path.dirname(T1)
	T1_base=os.path.splitext(os.path.basename(T1))[0]
	T2_dir=os.path.dirname(T2)
	T2_base=os.path.splitext(os.path.basename(T2))[0]
	
	ATLAS = os.path.join(PATH, "atlas_T1_sym_RAI.nrrd")
	STX_T1 = os.path.join(T1_dir, "".join([T1_base,"_stx.nrrd"]))
	STX_T2 = os.path.join(T2_dir, "".join([T2_base,"_stx.nrrd"]))

	args=['BRAINSFit', '--fixedVolume', ATLAS, '--movingVolume', T1, '--outputVolume', STX_T1, 
		'--useRigid', '--initializeTransformMode', 'useCenterOfHeadAlign', '--outputVolumePixelType', 'short']
        brainsfit = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = brainsfit.communicate()

	args=['BRAINSFit', '--fixedVolume', STX_T1, '--movingVolume', T2, '--outputVolume', STX_T2, 
		'--useRigid', '--initializeTransformMode', 'useCenterOfHeadAlign', '--outputVolumePixelType', 'short']
	brainsfit = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	out, err = brainsfit.communicate()


if (__name__ == "__main__"):
	parser = OptionParser(usage="%prog t1w.nrrd t2w.nrrd [options]")
	parser.add_option("-k","--keepMidResults",action="store_false", dest="verboseKeep", default=True, help="Keep mid/temp results")
	parser.add_option("-o","--OTSU",action="store_true", dest="verboseOTSU", default=False, help="apply otsu using ImageMath")
	parser.add_option("-v",action="store", dest="VISIT",type="string", help="Visit (e.g. V12, V24..)",default="")
	(opts, argv) = parser.parse_args()	
	main(opts, argv)
