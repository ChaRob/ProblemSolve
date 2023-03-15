from itertools import combinations
n,m=map(int,input().split())
city=[list(map(int,input().split())) for _ in range(n)]
citypos=dict()
for i in range(n):
    for j in range(n):
        if city[i][j]==1:
            citypos[(i,j)]=[]
ChickenCnt=0
for i in range(n):
    for j in range(n):
        if city[i][j]==2:
            ChickenCnt+=1
            for x,y in citypos.keys():
                citypos[(x,y)].append(abs(x-i)+abs(y-j))
need=list(combinations(range(ChickenCnt),m))
result=100000000
for comb in need:
    minsum=0
    for dis in citypos.values():
        minv=2500
        for idx in comb:
            if dis[idx]<minv: minv=dis[idx]
        minsum+=minv
    if result>minsum:
        result=minsum
print(result)