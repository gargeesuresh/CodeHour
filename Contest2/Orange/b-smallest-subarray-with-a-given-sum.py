x = int(input())

for i in range(x):
    nums=input()
    length=int(nums.split(" ")[0])
    add=int(nums.split(" ")[1])
    array = input()
    arr = list(map(int,array.rstrip().split(" "))) 

    mini=9999
    for j in range(length-1):
        current_sum = 0
        time=0
        for k in range(j+1, length):
            current_sum += arr[k]
            time+=1
            # print(current_sum)
            if (current_sum>=add):
                # print('here'+str(current_sum))
                if mini>time:
                    mini=time
    if (mini==9999):
        print(0)
    else:
        print(mini)
