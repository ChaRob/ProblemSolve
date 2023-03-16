import sys
input=sys.stdin.readline
n=int(input())
W=[list(map(int,input().split())) for _ in range(n)]
dp=[[-1]*(1<<n) for _ in range(n)]

def athlete(last_athlete,route):
    if dp[last_athlete][route] != -1:
        return dp[last_athlete][route]

    dp[last_athlete][route] = 0
    for i in range(n):
        if W[last_athlete][i] and route&(1<<i)==0:
            cnt=athlete(i,route|(1<<i))
            dp[last_athlete][route]=max(dp[last_athlete][route],cnt+1)

    return dp[last_athlete][route]

def path(last_athlete,route):
    for i in range(n):
        if W[last_athlete][i] and route&(1<<i)==0:
            if dp[last_athlete][route] == dp[i][route|(1<<i)]+1:
                print(i+1,end=" ")
                path(i,route|(1<<i))
                break

num=athlete(0,1)
print(num+1)
print(1,end=' ')
path(0,1)