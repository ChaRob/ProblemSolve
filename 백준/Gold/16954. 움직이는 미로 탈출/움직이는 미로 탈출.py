board=[list(input()) for _ in range(8)]
movedir=[(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1),(0,0)]
CanGol=1
wall_cnt=0
for i in range(8):
    for j in range(8):
        if board[i][j]=='#':
            wall_cnt+=1

def wallmove(lastboard):
    global wall_cnt
    wall_cnt-=lastboard[7].count('#')
    for i in range(7,0,-1):
        for j in range(8):
            lastboard[i][j]=lastboard[i-1][j]
    for j in range(8):
        lastboard[0][j]='.'
    return lastboard

def bfs(que,board):
    global wall_cnt
    next_que=[]
    alive_que=[]
    for i,j in que:
        if board[i][j]!='#':
            alive_que.append((i,j))
    while alive_que:
        x,y=alive_que.pop(0)
        for dx,dy in movedir:
            nx,ny=x+dx,y+dy
            if 0<=nx<8 and 0<=ny<8 and board[nx][ny]!='#':
                if nx==0 and ny==7: return 1
                next_que.append((nx,ny))
    if len(next_que)==0: return 0
    elif wall_cnt==0: return 1
    newboard=wallmove(board)
    return bfs(next_que,newboard)

que=[(7,0)]
CanGol=bfs(que,board)
print(CanGol)