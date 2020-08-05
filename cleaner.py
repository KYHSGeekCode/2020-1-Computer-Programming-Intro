import os
import sys
import re
import shutil

def lint(filepath):
    file1 = open(filepath, 'r')
    lines = file1.readlines()
    if lines[0].startswith("/*"):
        closingline = 0
        while True:
            if "*/" in lines[closingline]:
                break
            closingline = closingline + 1
        concatstr = '\n'.join(lines[0:closingline])
        if "프로그램명" in concatstr and "설명" in concatstr and "작성일시" in concatstr and "작성자" in concatstr:
            file1.close()
            return
        print("Lintt failed." , filepath)
    print("Lint failed", filepath)


oldpath = input("Which folder")
newpath = oldpath+"_"
os.rename(oldpath, newpath)
os.makedirs(oldpath)
for fil in os.listdir(newpath):
    match = re.match(r'practice(\d{2})', fil)
    if match is None:
        print(fil, "is not a valid practice.")
        continue
    practicenum = match.group(1)
    fullfil = os.path.join(newpath, fil)
    srcpath = os.path.join(fullfil, fil, fil+".c")
    exepath = os.path.join(fullfil, "Debug", fil+".exe")
    targetPracticeFolder = os.path.join(oldpath, str(practicenum))
    os.makedirs(targetPracticeFolder)
    targetSrcPath = os.path.join(targetPracticeFolder, fil+".c")
    targetExePath = os.path.join(targetPracticeFolder, fil+".exe")
    shutil.copyfile(srcpath, targetSrcPath)
    shutil.copyfile(exepath, targetExePath)
    #lint(targetSrcPath)

