import sys
input=sys.stdin.readline
direction=[(-1,0),(0,1),(1,0),(0,-1)]
n=int(input())
board=[[0]*n for _ in range(n)]
snake_dir=[[0]*n for _ in range(n)]
board[0][0]=2
head_x,head_y=0,0
k=int(input())
for _ in range(k):
    i,j=map(int,input().split())
    board[i-1][j-1]=9
l=int(input())
snake_routine=[list(map(str,input().split())) for _ in range(l)]
time,dir=0,1
snake_length,snake_length_max=1,n*n
tail_x,tail_y=0,0
while snake_length<snake_length_max:
    nx=head_x+direction[dir][0]
    ny=head_y+direction[dir][1]
    time+=1
    if nx<0 or nx>=n or ny<0 or ny>=n:
        break
    if board[nx][ny]==1:
        break
    elif board[nx][ny]==9:
        board[nx][ny]=2
        board[head_x][head_y]=1
        snake_length+=1
    else:
        board[nx][ny]=2
        board[head_x][head_y]=1
        board[tail_x][tail_y]=0
        if snake_length>1:
            tail_x,tail_y=tail_x+snake_dir[tail_x][tail_y][0],\
                          tail_y+snake_dir[tail_x][tail_y][1]
        else:
            tail_x+=direction[dir][0]
            tail_y+=direction[dir][1]
    snake_dir[head_x][head_y]=direction[dir]
    head_x,head_y=nx,ny
    if len(snake_routine)>0 and int(snake_routine[0][0])==time:
        if snake_routine[0][1]=='D':
            dir=(dir+1)%4
        else:
            dir=dir-1 if dir-1>=0 else 3
        snake_routine.pop(0)

print(time)