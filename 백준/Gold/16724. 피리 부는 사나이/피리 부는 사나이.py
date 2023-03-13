direction={'D':(1,0),'U':(-1,0),'L':(0,-1),'R':(0,1)}
n,m=map(int,input().split())
roadmap=[list(input()) for _ in range(n)]
visited=[[False]*m for _ in range(n)]
cycle=[[0]*m for _ in range(n)]
res=0

for i in range(n):
    for j in range(m):
        if not visited[i][j] and cycle[i][j]==0:
            route=[(i,j)]
            x,y=i,j
            visited[x][y]=True
            while True:
                dx,dy=direction[roadmap[x][y]]
                nx,ny=x+dx,y+dy
                if visited[nx][ny]:
                    if cycle[nx][ny]==0:
                        res+=1
                    break
                if not visited[nx][ny]:
                    visited[nx][ny]=True
                    route.append((nx,ny))
                x,y=nx,ny

            while route:
                x,y=route.pop()
                cycle[x][y]=1
print(res)