import os
import sys

i = 5
ret = sys.argv[0].find("_")
if ret != -1:
    i -= 1
next_exec = "Sully_%d.py"% i
str = "import os%cimport sys%c%ci = %d%cret = sys.argv[0].find(%c_%c)%cif ret != -1:%c    i -= 1%cnext_exec = %cSully_%%d.py%c%% i%cstr = %c%s%c%cfile = open(next_exec, %cw%c)%cfile.write(str%% (10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10))%cfile.close()%cif i > 0:%c    os.system(%cpython %%s%c%% next_exec)%c"
file = open(next_exec, "w")
file.write(str% (10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10))
file.close()
if i > 0:
    os.system("python %s"% next_exec)
