x = int(input())

for i in range(x):
    nums=input()
    length=int(nums.split(" ")[0])
    add=int(nums.split(" ")[1])
    done=False
    array = input()
    arr = list(map(int, array.split(" ")))
    for j in range(length-1):
        current_sum = 0
        for k in range(j, length):
            current_sum = arr[j] + arr[k]
            # print(current_sum)
            if (current_sum==add):
                print("Yes")
                done=True
    if (done==False):        
        print("No")
