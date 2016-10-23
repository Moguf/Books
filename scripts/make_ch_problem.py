#!/usr/bin/env python3
import sys

part = int(sys.argv[1]) + 1
ch = int(sys.argv[2]) + 1
section = int(sys.argv[3]) + 1

for i in range(1, part):
    for j in range(1, ch):
        for k in range(1, section):
            print("%d.%d.%d" % (i,j,k))
            print("------------")
            print("Answer")
            print("^^^^^^^^\n")
