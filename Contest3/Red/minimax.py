#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    sumarr=[]
    for i in range(len(arr)):
        sumarr.append(sum(arr)-arr[i])
    print(min(sumarr), max(sumarr))

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

