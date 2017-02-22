#
# First comment
#

def ok():
# intern comment
    return

str = "#%c# First comment%c#%c%cdef ok():%c# intern comment%c    return%c%cstr = %c%s%c%c%cprint(str %% (10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10))"

print(str % (10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10))
