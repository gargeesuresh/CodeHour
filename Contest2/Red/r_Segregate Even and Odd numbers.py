a=int(input())
for i in range (a):
    num=int(input())
    array =list(map(int, input().split()))
    even=[]
    odd=[]
    for j in array :
        if (j%2 == 0):
            even.append(j)
        if (j%2 !=0):
            odd.append(j)
    even.sort()
    odd.sort()
    arr=even+odd
    for k in range(num):
        if i >=1 and k == 0:
            print()
            print(arr[k], end = ' ')
        else:
            print(arr[k],end=" ")