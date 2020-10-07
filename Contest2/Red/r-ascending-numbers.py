x = int(input())

for i in range(x):
    nums = list(map(int, input().rstrip().split()))
    sor = input()
    if (sor=="1"):
        nums.sort(reverse=True)
    else:
        nums.sort()
        
    nums= " ".join(str(e) for e in nums)
    if (i==x-1):
        print(nums, end="")
    else:
        print(nums)
