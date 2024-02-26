print("Hello World")

a = input()
b = len(a)
c = a[::-1]
flag = 1
for i in range(b):
    if(a[i]!=c[i]):
        flag = 0
        break
if(flag == 1):
    print("YES")
else:
    print("NO")