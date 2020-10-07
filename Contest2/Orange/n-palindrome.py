def is_palindrome(num):
    num = str(num)
    rev= num[::-1]
    if num==rev:
        return True
    else:
        return False
def is_prime(num):
    for i in range(2, int(num/2)):
        if (num%i==0):
            return False
    return True

x = int(input())

if (is_palindrome(x) and is_prime(x)):
    print("Yes")
else:
    print("No")

