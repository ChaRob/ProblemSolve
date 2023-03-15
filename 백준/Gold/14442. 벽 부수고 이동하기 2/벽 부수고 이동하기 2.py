from collections import deque
import sys
input=sys.stdin.readline
n,m,k=map(int,input().split())
roadmap=[list(map(int,list(input().strip()))) for _ in range(n)]
brick=[[k+1]*m for _ in range(n)]
direction=[(-1,0),(1,0),(0,-1),(0,1)]
brick[0][0]=0

def bfs():
    que=deque([(0,0,0)])
    while que:
        dist,x,y=que.popleft()
        if x==n-1 and y==m-1:
            print(dist+1)
            return
        for dx,dy in direction:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<m:
                route=roadmap[nx][ny]+brick[x][y]
                if route<brick[nx][ny] and route<=k:
                    brick[nx][ny]=route
                    que.append((dist+1,nx,ny))
    print(-1)
bfs()