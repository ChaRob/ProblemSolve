from collections import deque
n,k=map(int,input().split())
mindist=100001
dp=[-1]*100001
que=deque([n])
dp[n]=0
while que:
    x=que.popleft()
    if x==k:
        mindist=dp[k]
    else:
        if x-1>=0 and dp[x]+1<mindist and dp[x-1]==-1:
            dp[x-1]=dp[x]+1
            que.append(x-1)
        if x*2<=100000 and dp[x]+1<mindist and dp[x*2]==-1:
            dp[x*2]=dp[x]+1
            que.append(x*2)
        if x+1<=100000 and dp[x]+1<mindist and dp[x+1]==-1:
            dp[x+1]=dp[x]+1
            que.append(x+1)
print(mindist)
que=deque([k])
arr=[k]
while que:
    x=que.popleft()
    if x==n:
        break
    else:
        if x-1>=0 and dp[x]-1==dp[x-1]:
            que.append(x-1)
            arr.append(x-1)
        elif x+1<=100000 and dp[x]-1==dp[x+1]:
            que.append(x+1)
            arr.append(x+1)
        elif x%2==0 and dp[x]-1==dp[x//2]:
            que.append(x//2)
            arr.append(x//2)
print(*arr[::-1])