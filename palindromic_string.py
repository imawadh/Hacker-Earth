
a = input() # Taking the input in the form of string 
b = len(a) # Finding the lenght of the string 
c = a[::-1] # Reversing the String 
flag = 1
for i in range(b):
    if(a[i]!=c[i]):
        flag = 0
        break
if(flag == 1):
    print("YES")
else:
    print("NO")