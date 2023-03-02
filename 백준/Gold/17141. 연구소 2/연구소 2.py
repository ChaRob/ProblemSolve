from collections import deque
n,m=map(int,input().split())
lap=[list(map(int,input().split())) for _ in range(n)]
virus=[]
max_area=0
min_time=[]
for i in range(n):
    for j in range(n):
        if lap[i][j]==2:
            virus.append((i,j))
        elif lap[i][j]==0:
            max_area+=1

def bfs(p):
    max_time=0
    area=max_area+len(virus)-m
    time=[[2500]*n for _ in range(n)]
    que=deque()
    for i in range(len(p)):
        if p[i]==True:
            que.append(virus[i])
            time[virus[i][0]][virus[i][1]]=0
    while que:
        x,y=que.popleft()
        for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<n and lap[nx][ny] in [0,2] and time[nx][ny]==2500:
                time[nx][ny]=time[x][y]+1
                max_time=max(max_time,time[nx][ny])
                area-=1
                que.append((nx,ny))
    if area!=0:
        return -1
    return max_time

def virus_input(p,k,j):
    global min_time
    if k==m:
        temp=bfs(p)
        if temp!=-1:
            min_time.append(temp)
    else:
        for i in range(j,len(virus)-m+1+k):
            p[i]=True
            virus_input(p,k+1,i+1)
            p[i]=False

p=[False]*len(virus)
virus_input(p,0,0)
if len(min_time)==0:
    print(-1)
else:
    print(min(min_time))