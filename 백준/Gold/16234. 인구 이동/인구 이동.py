from collections import deque
from copy import deepcopy
n,l,r=map(int,input().split())
A=[list(map(int,input().split())) for _ in range(n)]
dx,dy=[0,0,-1,1],[-1,1,0,0]

def findalliance(start_x,start_y):
    que=deque()
    que.append((start_x,start_y))
    all_list=[(start_x,start_y)]
    allsum,allcnt=A[start_x][start_y],1
    while que:
        x,y=que.popleft()
        visited[x][y]=True
        for dir in range(4):
            nx,ny=x+dx[dir],y+dy[dir]
            if 0<=nx<n and 0<=ny<n:
                if not visited[nx][ny] and l<=abs(A[x][y]-A[nx][ny])<=r:
                    que.append((nx,ny))
                    all_list.append((nx,ny))
                    visited[nx][ny]=True
                    allsum+=A[nx][ny]
                    allcnt+=1
    if allcnt!=1:
        all_result=allsum//allcnt
        for x,y in all_list:
            A_new[x][y]=all_result
        return 1
    else:
        return 0

movecnt=0
while True:
    A_new=[[0]*n for _ in range(n)]
    visited=[[False]*n for _ in range(n)]
    res = 0
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                res+=findalliance(i,j)
    if res==0:
        break
    for x in range(n):
        for y in range(n):
            if A_new[x][y]==0:
                A_new[x][y]=A[x][y]
    A=deepcopy(A_new)
    movecnt+=1
print(movecnt)
