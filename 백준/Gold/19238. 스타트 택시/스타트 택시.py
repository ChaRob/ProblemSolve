from collections import deque
import sys
inpupt=sys.stdin.readline
direct=[(-1,0),(1,0),(0,-1),(0,1)]
n,m,fuel=map(int,input().split())
roadmap=[list(map(int,input().split())) for _ in range(n)]
start_x,start_y=map(int,input().split())
start_x-=1; start_y-=1
customer=[0]*(m+2)
for i in range(2,m+2):
    a,b,c,d=map(int,input().split())
    roadmap[a-1][b-1]=i
    customer[i]=(c-1,d-1)

def find_goal(sx,sy,fuel,gx,gy):
    que=deque([(sx,sy)])
    dist=[[0]*n for _ in range(n)]
    visited=[[False]*n for _ in range(n)]
    visited[sx][sy]=True
    while que:
        x,y=que.popleft()
        for dx,dy in direct:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<n and roadmap[nx][ny]!=1 and dist[x][y]+1<=fuel and not visited[nx][ny]:
                visited[nx][ny]=True
                dist[nx][ny]=dist[x][y]+1
                if nx==gx and ny==gy:
                    return nx,ny,fuel+dist[nx][ny]
                que.append((nx,ny))
    return -1,-1,-1

def customer_find(tx,ty,fuel):
    que=deque([(tx,ty)])
    dist=[[0]*n for _ in range(n)]
    visited=[[False]*n for _ in range(n)]
    visited[tx][ty]=True
    dist[tx][ty]=0
    customer_candidate=[]
    max_dist=400
    if roadmap[tx][ty]>=2:
        return (tx,ty,roadmap[tx][ty]),fuel
    while que:
        x,y=que.popleft()
        for dx,dy in direct:
            nx,ny=x+dx,y+dy
            if 0<=nx<n and 0<=ny<n and roadmap[nx][ny]!=1 and dist[x][y]+1<=max_dist and fuel>=dist[x][y]+1 and not visited[nx][ny]:
                dist[nx][ny]=dist[x][y]+1
                visited[nx][ny]=True
                if roadmap[nx][ny]>=2:
                    max_dist=dist[nx][ny]
                    customer_candidate.append((nx,ny,roadmap[nx][ny]))
                que.append((nx,ny))
    if len(customer_candidate)==0:
        return (-1,-1,-1),-1
    customer_candidate.sort(key=lambda x:(x[0],x[1]))
    return customer_candidate[0],fuel-max_dist

for _ in range(m):
    (x,y,customer_num),fuel=customer_find(start_x,start_y,fuel)
    if x==-1:
        fuel=-1
        break
    roadmap[x][y]=0
    gx,gy=customer[customer_num]
    start_x,start_y,fuel=find_goal(x,y,fuel,gx,gy)
    if start_x==-1:
        fuel=-1
        break

print(fuel)