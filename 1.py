import subprocess

 

def find_file(file):

    return subprocess.check_output("find . -name '%s'" % file,

                                   shell=True).splitlines()

