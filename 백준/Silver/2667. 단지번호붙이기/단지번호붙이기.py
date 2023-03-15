import sys
from collections import deque
dx,dy=[-1,1,0,0],[0,0,-1,1]

n=int(sys.stdin.readline())
graph=[list(map(int, list(sys.stdin.readline().strip()))) for _ in range(n)]
visited=[[False]*n for _ in range(n)]

def find_house(x,y):
    que=deque()
    que.append((x,y))
    visited[x][y]=True
    breadth=1
    while que:
        x,y=que.popleft()
        for i in range(4):
            nx,ny=x+dx[i],y+dy[i]
            if 0<=nx<n and 0<=ny<n:
                if graph[nx][ny]==1 and visited[nx][ny]==False:
                    que.append((nx,ny))
                    visited[nx][ny]=True
                    breadth+=1
    return breadth
count=0
house=[]
for i in range(n):
        for j in range(n):
            if visited[i][j]==False and graph[i][j]==1:
                house.append(find_house(i,j))
                count+=1
print(count)
for x in sorted(house):
    print(x)