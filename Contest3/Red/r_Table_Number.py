t=input().strip().split()
i=int(t[0])
j=int(t[1])
for k in range(j):
    print("%d * %d = %d" %(i,k+1, i*(k+1)))
