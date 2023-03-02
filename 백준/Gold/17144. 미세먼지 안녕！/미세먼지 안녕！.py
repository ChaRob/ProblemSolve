def spread(x,y,new_room):
    global room
    cnt=0
    amount=room[x][y]//5
    for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
        nx,ny=x+dx,y+dy
        if 0<=nx<r and 0<=ny<c and room[nx][ny]!=-1:
            new_room[nx][ny]+=amount
            cnt+=1
    new_room[x][y]+=room[x][y]-amount*cnt
    return new_room

def clean_room(new_room):
    up,down=air_cleaner[0],air_cleaner[1]
    for i in range(up-2,-1,-1):
        new_room[i+1][0]=new_room[i][0]
    for i in range(down+1,r-1):
        new_room[i][0]=new_room[i+1][0]
    for j in range(c-1):
        new_room[0][j]=new_room[0][j+1]
        new_room[r-1][j]=new_room[r-1][j+1]
    for i in range(up):
        new_room[i][c-1]=new_room[i+1][c-1]
    for i in range(r-1,down,-1):
        new_room[i][c-1]=new_room[i-1][c-1]
    for j in range(c-1,1,-1):
        new_room[up][j]=new_room[up][j-1]
        new_room[down][j]=new_room[down][j-1]

    new_room[up][1]=0
    new_room[down][1]=0
    return new_room

r,c,t=map(int,input().split())
room=[list(map(int,input().split())) for _ in range(r)]
air_cleaner=[]
for i in range(r):
    if room[i][0]==-1:
        air_cleaner.append(i)
for _ in range(t):
    new_room=[[0]*c for _ in range(r)]
    for x in air_cleaner: new_room[x][0]=-1
    for i in range(r):
        for j in range(c):
            if room[i][j]>0:
                new_room=spread(i,j,new_room)
    room=clean_room(new_room)

print(sum([sum(room[i]) for i in range(r)])+2)