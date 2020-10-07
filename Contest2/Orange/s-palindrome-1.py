x = int(input())
letters=0
for i in range(x):
    word=input()
    rev = word[::-1]
    if(rev==word):
        letters+=len(word)
        
print(letters)


