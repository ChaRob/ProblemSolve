from collections import deque
from itertools import combinations
n,m=map(int,input().split())
lap=[list(map(int,input().split())) for _ in range(n)]
direction=[(-1,0),(1,0),(0,-1),(0,1)]
min_time=[]
virus=[]
maxarea=0
for i in range(n):
    for j in range(n):
        if lap[i][j]==0:
            maxarea+=1
        elif lap[i][j]==2:
            virus.append((i,j))

def bfs(alive,area):
    que=deque(alive)
    time=[[2500]*n for _ in range(n)]
    max_time=0
    for i,j in alive:
        time[i][j]=0
    while que:
        x,y=que.popleft()
        for dx,dy in direction:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<n and time[nx][ny]==2500:
                if lap[nx][ny] in [0,2]:
                    que.append((nx,ny))
                    time[nx][ny]=time[x][y]+1
                    max_time=max(max_time,time[nx][ny])
                    if lap[nx][ny]==0:
                        area-=1
                        if area==0:
                            return max_time
    return -1
if maxarea==0: print(0)
else:
    for alive in combinations(virus,m):
        maxtime=bfs(alive,maxarea)
        if maxtime!=-1:
            min_time.append(maxtime)
    if len(min_time)==0:
        print(-1)
    else:
        print(min(min_time))