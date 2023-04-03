import heapq
direct = [(-1,0),(1,0),(0,-1),(0,1)]
T=int(input())
for t in range(T):
    n=int(input())
    roadmap=[list(map(int,list(input()))) for _ in range(n)]
    dp=[[-1]*n for _ in range(n)]
    que=[]
    heapq.heappush(que,(0,0,0))
    dp[0][0]=0
    while que:
        restore,x,y=heapq.heappop(que)
        for dx,dy in direct:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<n:
                if dp[nx][ny]==-1:
                    dp[nx][ny]=dp[x][y]+roadmap[nx][ny]
                    heapq.heappush(que,(dp[nx][ny],nx,ny))
                elif dp[nx][ny]>dp[x][y]+roadmap[nx][ny]:
                    dp[nx][ny]=dp[x][y]+roadmap[nx][ny]
                    heapq.heappush(que,(dp[nx][ny],nx,ny))

    print(f'#{t+1} {dp[n-1][n-1]}')