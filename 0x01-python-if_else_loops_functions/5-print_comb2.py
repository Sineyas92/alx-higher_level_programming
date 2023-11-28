#!/usr/bin/python3
for counter in range(100):
    print("{0:02d}".format(counter), end=", " if counter < 99 else "\n")
