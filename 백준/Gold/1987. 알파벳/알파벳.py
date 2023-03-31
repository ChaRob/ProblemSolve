r,c=map(int,input().split())
board=[list(input()) for _ in range(r)]
dx,dy=[0,0,-1,1],[-1,1,0,0]
max_dis=0

que=set([(0,0,board[0][0])])
while que and max_dis<26:
    x,y,visit=que.pop()
    max_dis=max(max_dis,len(visit))
    for dir in range(4):
        nx,ny=x+dx[dir],y+dy[dir]
        if 0<=nx<r and 0<=ny<c and board[nx][ny] not in visit:
            que.add((nx,ny,visit+board[nx][ny]))

print(max_dis)