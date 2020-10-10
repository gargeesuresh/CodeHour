#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'climbingLeaderboard' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#

def climbingLeaderboard(ranked, player):
    # Write your code here
    ans = []
    rank = [1]
    for i in range(1, len(ranked)):
        if ranked[i] != ranked[i - 1]:
            rank.append(rank[-1] + 1)
        else:
            rank.append(rank[-1])
    
    for score in player:
        l, r = 0, len(ranked) - 1
        pos = -1
        while l <= r:
            mid = (l + r) // 2
            if ranked[mid] > score:
                pos = mid
                l = mid + 1
            else:
                r = mid - 1
        if pos == -1:
            ans.append(1)
        else:
            ans.append(rank[pos] + 1)
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ranked_count = int(input().strip())

    ranked = list(map(int, input().rstrip().split()))

    player_count = int(input().strip())

    player = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(ranked, player)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
