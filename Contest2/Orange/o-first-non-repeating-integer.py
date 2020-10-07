 x = int(input())

for i in range(x):
    l = int(input())
    arr = list(map(int, input().rstrip().split(" ")))
    freq = {}
    for j in arr:
        if j in freq:
            freq[j] += 1
        else:
            freq[j] = 1
    min = -999999
    for j in freq:
        if (freq[j]==1):
            if(min == -999999):
                min = j
            elif (arr.index(min)>arr.index(j)):
                min =j
                
    print(j)
