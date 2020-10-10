#!/bin/python3

import os
import sys
sys.setrecursionlimit(6000)

#
# Complete the swapNodes function below.
#

from collections import defaultdict
adj = defaultdict(lambda: [])

def swapNodes(indexes, queries):
    #
    # Write your code here.
    #
    ans = []
    inorder = []
    def dfs(root):
        if root == -1:
            return
        dfs(adj[root][0])
        inorder.append(root)
        dfs(adj[root][1])
    
    def solve(query, node, ht):
        if node == -1:
            return
        if ht % query == 0:
            adj[node] = adj[node][::-1]
        solve(query, adj[node][0], ht + 1)
        solve(query, adj[node][1], ht + 1)
            
    for i, [left, right] in enumerate(indexes):
        adj[i + 1].append(left)
        adj[i + 1].append(right)
        
    for query in queries:
        solve(query, 1, 1)
        inorder = []
        dfs(1)
        ans.append(inorder)
    return ans
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    indexes = []

    for _ in range(n):
        indexes.append(list(map(int, input().rstrip().split())))

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = int(input())
        queries.append(queries_item)

    result = swapNodes(indexes, queries)

    fptr.write('\n'.join([' '.join(map(str, x)) for x in result]))
    fptr.write('\n')

    fptr.close()
