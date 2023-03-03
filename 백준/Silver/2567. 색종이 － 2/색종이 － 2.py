n=int(input())
board=[[0]*102 for _ in range(102)]
x_min,x_max=100,0
y_min,y_max=100,0
dx,dy=[0,0,-1,1],[-1,1,0,0]
for _ in range(n):
    up,left=map(int,input().split())
    if up+10>x_max: x_max=up+10
    if up<x_min: x_min=up
    if left+10>y_max: y_max=left+10
    if left<y_min: y_min=left
    for x in range(up,up+10):
        for y in range(left,left+10):
            board[x+1][y+1]=1
cnt=0
for x in range(x_min+1,x_max+1):
    for y in range(y_min+1,y_max+1):
        if board[x][y]==1:
            for dir in range(4):
                nx,ny=x+dx[dir],y+dy[dir]
                if board[nx][ny]==0: cnt+=1
print(cnt)