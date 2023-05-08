from itertools import permutations
n=int(input())
A=map(int,input().split())
max_value=0
for x in permutations(A,n):
    temp=0
    for i in range(1,n):
        temp+=abs(x[i-1]-x[i])
    if temp>max_value:
        max_value=temp
print(max_value)