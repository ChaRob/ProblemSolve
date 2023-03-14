from collections import deque
direction=[(-1,0),(1,0),(0,-1),(0,1)]
m,n=map(int,input().split())
roadmap=[list(input()) for _ in range(n)]

def bfs(start_x,start_y):
    que=deque([(start_x,start_y)])
    dist=[[10000]*m for _ in range(n)]
    dist[start_x][start_y]=0
    while que:
        x,y=que.popleft()
        for dx,dy in direction:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<m:
                if dist[nx][ny]==10000:
                    if roadmap[nx][ny]=='1':
                        dist[nx][ny] = min(dist[nx][ny], dist[x][y]+1)
                        que.append((nx,ny))
                    else:
                        dist[nx][ny]=min(dist[nx][ny], dist[x][y])
                        que.appendleft((nx, ny))
    print(dist[n-1][m-1])

bfs(0,0)