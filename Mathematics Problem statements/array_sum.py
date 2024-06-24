# solved 
val = int(input())
value = list(map(int,input().split()))
sum = 0
for i in range(len(value)):
    sum+=value[i]
print(sum)