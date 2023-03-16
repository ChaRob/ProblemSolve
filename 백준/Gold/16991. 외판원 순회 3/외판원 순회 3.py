import sys,math
input=sys.stdin.readline
n=int(input())
W=[[0]*n for _ in range(n)]
dp=[[-1]*(1<<n) for _ in range(n)]

def distance(x1,y1,x2,y2):
    return math.sqrt((x1-x2)**2+(y1-y2)**2)

city_xy=[tuple(map(int,input().split())) for _ in range(n)]
for i in range(n):
    for j in range(i+1,n):
        x1,y1=city_xy[i]
        x2,y2=city_xy[j]
        W[i][j]=W[j][i]=distance(x1,y1,x2,y2)

def city(last_city,route):
    if route==(1<<n)-1:
        if W[last_city][0]:
            return W[last_city][0]
        else:
            return 17000000
    if dp[last_city][route] != -1:
        return dp[last_city][route]

    dp[last_city][route]=17000000
    for i in range(1,n):
        if W[last_city][i] and route&(1<<i)==0:
            price=city(i,route|(1<<i))
            dp[last_city][route]=min(dp[last_city][route],W[last_city][i]+price)

    return dp[last_city][route]

minprice=city(0,1)
print(minprice)