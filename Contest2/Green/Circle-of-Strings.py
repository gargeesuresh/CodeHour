t = int(input())
for _ in range(t):
    n = int(input())
    L = list(map(str, input().split()))
    a = []
    adj = dict()
    for i in range(len(L)): 
        a.append(i)
        adj[i] = []
    
    for i in range(n):
        for j in range(n):
            if i != j:
                if L[i][-1] == L[j][0]:
                    adj[i].append(j)
    n = len(L)
    comp = []
    used = [False] * n
    def dfs(i):
        used[i] = True
        comp.append(i)
        for j in adj[i]:
            if not used[j]:
                dfs(j)
    
    ans = 0
    for i in range(n):
        used = [False] * n
        comp = []
        dfs(i)
        if len(comp) == n and L[comp[-1]][-1] == L[comp[0]][0]:
            ans = 1
    
    print(ans)