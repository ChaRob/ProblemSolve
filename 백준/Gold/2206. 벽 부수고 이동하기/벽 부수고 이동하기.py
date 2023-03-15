import sys
from collections import deque
from itertools import combinations
input=sys.stdin.readline
n,m=map(int,input().strip().split())
miro=[list(input().strip()) for _ in range(n)]
direct=[(-1,0),(1,0),(0,-1),(0,1)]
min_dist=1000000000
dist1=[[0]*m for _ in range(n)]
dist2=[[0]*m for _ in range(n)]

def bfs(start_x,start_y,end_x,end_y,dist):
    global min_dist
    visited=[[False]*m for _ in range(n)]
    que=deque()
    que.append((start_x,start_y))
    visited[start_x][start_y]=True
    dist[start_x][start_y]=1
    while que:
        x,y=que.popleft()
        for dx,dy in direct:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<m and not visited[nx][ny] and miro[nx][ny]=='0':
                visited[nx][ny]=True
                que.append((nx,ny))
                dist[nx][ny]=dist[x][y]+1
    if dist[end_x][end_y]!=0:
        min_dist=min(min_dist,dist[end_x][end_y])

bfs(0,0,n-1,m-1,dist1)
bfs(n-1,m-1,0,0,dist2)
for i in range(n):
    for j in range(m):
        if miro[i][j]=='1':
            route=[]
            for di,dj in direct:
                ni,nj=i+di,j+dj
                if 0<=ni<n and 0<=nj<m and miro[ni][nj]=='0':
                    route.append((di,dj))
            for s,e in combinations(route,2):
                if dist1[i+s[0]][j+s[1]]>0 and dist2[i+e[0]][j+e[1]]>0:
                    new_dist=dist1[i+s[0]][j+s[1]]+dist2[i+e[0]][j+e[1]]+1
                    min_dist=min(min_dist,new_dist)
                if dist2[i+s[0]][j+s[1]]>0 and dist1[i+e[0]][j+e[1]]>0:
                    new_dist = dist2[i + s[0]][j + s[1]] + dist1[i + e[0]][j + e[1]] + 1
                    min_dist = min(min_dist, new_dist)

if min_dist!=1000000000:
    print(min_dist)
else:
    print(-1)