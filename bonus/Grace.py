def CLOSE(file): file.close()
def WRITE(file, str): file.write(str)
def MACRO(): str="def CLOSE(file): file.close()%cdef WRITE(file, str): file.write(str)%cdef MACRO(): str=%c%s%c;file=open(%cGrace_kid.py%c, %cw%c);WRITE(file, str%% (10, 10, 34, str, 34, 34, 34, 34, 34, 10, 10, 10, 10));CLOSE(file)%c%cMACRO()%c#comment%c";file=open("Grace_kid.py", "w");WRITE(file, str% (10, 10, 34, str, 34, 34, 34, 34, 34, 10, 10, 10, 10));CLOSE(file)

MACRO()
#comment
