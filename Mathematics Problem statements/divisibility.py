#solved 
val = int(input())
value = list(map(int,input().split()))
sum = 0
for i in range(len(value)):
    num = value[i]%10
    sum=sum+num
    sum*=10
if(sum%100==0):
    print("Yes")
else:
    print("No")