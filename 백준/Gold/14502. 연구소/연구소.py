from collections import deque
dx,dy=[0,0,-1,1],[-1,1,0,0]
n,m=map(int,input().split())
lap=[list(map(int,input().split())) for _ in range(n)]
virus=[]
make_wall=[]
for i in range(n):
    for j in range(m):
        if lap[i][j]==0:
            make_wall.append((i,j))
        elif lap[i][j]==2:
            virus.append((i,j))

max_area=0
def bfs():
    global max_area
    que=deque()
    visited=[[False]*m for _ in range(n)]
    for i in range(len(virus)):
        que.append(virus[i])
        visited[virus[i][0]][virus[i][1]]=True
    while que:
        x,y=que.popleft()
        for dir in range(4):
            nx,ny=x+dx[dir],y+dy[dir]
            if 0<=nx<n and 0<=ny<m and lap[nx][ny]==0 and not visited[nx][ny]:
                visited[nx][ny]=True
                que.append((nx,ny))
    cnt=0
    for i in range(n):
        for j in range(m):
            if not visited[i][j] and lap[i][j]==0:
                cnt+=1
    max_area=max(max_area,cnt)

for i in range(len(make_wall)-2):
    for j in range(i+1,len(make_wall)-1):
        for k in range(j+1,len(make_wall)):
            lap[make_wall[i][0]][make_wall[i][1]]=1
            lap[make_wall[j][0]][make_wall[j][1]]=1
            lap[make_wall[k][0]][make_wall[k][1]]=1
            bfs()
            lap[make_wall[i][0]][make_wall[i][1]]=0
            lap[make_wall[j][0]][make_wall[j][1]]=0
            lap[make_wall[k][0]][make_wall[k][1]]=0

print(max_area)