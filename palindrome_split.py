def palindrome_count(b):
    d = len(b)
    count = 0
    for i in range(b):
        for j in range(b-i+1,b):
            
a = int(input())
for i in range(a):
    b = input()
    c = palindrome_count(b)
    print(c,'\n')