#!/tools/Python/Python-2.7.3/bin/python2.7
##	by Han Bit Yoon (email: hanbit.yoon@gmail.com)
######################################################################################################### 

import sys
import os
import argparse
import subprocess

def main(args):
    T1 = args.t1
    T2 = args.t2
    ATLAS = args.atlas
    OUTPUT_DIR = args.output

    T1_dir=os.path.dirname(T1)
    T1_base=os.path.splitext(os.path.basename(T1))[0]
    T2_dir=os.path.dirname(T2)
    T2_base=os.path.splitext(os.path.basename(T2))[0]
    STX_T1 = os.path.join(OUTPUT_DIR, "".join([T1_base,"_stx.nrrd"]))
    STX_T2 = os.path.join(OUTPUT_DIR, "".join([T2_base,"_stx.nrrd"]))

    args=['BRAINSFit', '--fixedVolume', ATLAS, '--movingVolume', T1, '--outputVolume', STX_T1, '--useRigid', '--initializeTransformMode', 'useCenterOfHeadAlign', '--outputVolumePixelType', 'short']
    brainsfit = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, err = brainsfit.communicate()

    args=['BRAINSFit', '--fixedVolume', STX_T1, '--movingVolume', T2, '--outputVolume', STX_T2, '--useRigid', '--initializeTransformMode', 'useCenterOfHeadAlign', '--outputVolumePixelType', 'short']
    brainsfit = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, err = brainsfit.communicate()

if (__name__ == "__main__"):
    parser = argparse.ArgumentParser(description='Calculates segmentation w/o ventricle mask. Computes deformation field with T1 vs ATLAS, applies warp to ventricle mask and masks tissue-seg')
    parser.add_argument('--t1', type=str, help='T1 Image to calculate deformation field against atlas', default="@T1IMG@")
    parser.add_argument('--t2', type=str, help='T2 Image to calculate deformation field against atlas', default="@T2IMG@")
    parser.add_argument('--atlas', type=str, help='Atlas image', default="@ATLAS@")
    parser.add_argument('--output', type=str, help='Output directory', default="@OUTPUT_DIR@")
    args = parser.parse_args()

    main(args)
