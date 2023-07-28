import math
min,max=map(int,input().split())
num=[True]*(max-min+1)
for n in range(2,int(math.sqrt(max))+1):
    squre=n**2
    while squre <= max:
        for i in range(int(min/squre)*squre,max+1,squre):
            if i<min: continue
            if num[i-min] == True:
                num[i-min]=False
        squre*=n

res=0
for i in num:
    if i==True:
        res+=1
print(res)