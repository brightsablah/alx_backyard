#!/usr/bin/python3
import sys
index = 1
total = 0
while (index != len(sys.argv)):
    total += int(sys.argv[index])
    index += 1
print(total)
