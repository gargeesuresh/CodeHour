x = int(input())

for i in range(x):
    if (i!=0):
        print()
    no = int(input())
    for n in range (1, no+1): 
        if(n%15==0):
            print("fizzbuzz", end="")
            continue
        if(n%3==0):
            print("fizz", end="")
            continue
        if(n%5==0):
            print("buzz", end="")
            continue
        print(str(n),end="")
