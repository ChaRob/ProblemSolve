n=int(input())
artists=[list(map(int,list(input()))) for _ in range(n)]
dp=[[[0]*10 for __ in range(1<<n)] for _ in range(n)]

def sell(artist,route,price):
    if dp[artist][route][price]!=0:
        return dp[artist][route][price]

    cnt=0
    for i in range(n):
        if price<=artists[artist][i] and route & (1<<i)==0:
            cnt=max(cnt,1+sell(i,route|(1<<i),artists[artist][i]))
    dp[artist][route][price]=cnt

    return cnt

res=sell(0,1,0)
print(res+1)