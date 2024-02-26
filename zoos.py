a = input()
count_z = 0
count_o = 0
for i in range(len(a)):
    if(a[i]=='z'):
        count_z+=1
    else:
        count_o+=1
if(2*count_z==count_o):
    print("YES")
else:
    print("NO")