#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argnum = len(sys.argv) - 1
    if argnum == 0:
        print("0 arguments.")
    elif argnum == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(argnum))
    for i in range(argnum):
        print("{}: {}".format(i + 1, sys.argv[i + 1]))
