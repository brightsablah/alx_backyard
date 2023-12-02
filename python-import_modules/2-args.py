#!/usr/bin/python3
import sys
argc = len(sys.argv) - 1
print("{} {}{}".format(argc, "argument" if argc == 1 else "arguments","." if argc == 0 else ":"))
for index, value in enumerate(sys.argv):
    if index != 0:
        print("{}: {}".format(index, value))
