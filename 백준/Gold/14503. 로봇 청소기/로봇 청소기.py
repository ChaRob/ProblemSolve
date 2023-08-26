direction=[(-1,0),(0,1),(1,0),(0,-1)]
back=[2,3,0,1]
n,m=map(int,input().split())
r,c,d=map(int,input().split())
room=[list(map(int,input().split())) for _ in range(n)]
cleaned=[[False]*m for _ in range(n)]

def operate(start_x,start_y,d):
    area=0
    x,y=start_x,start_y
    while True:
        if room[x][y]==0 and not cleaned[x][y]:
            cleaned[x][y]=True
            area+=1
        for dx,dy in direction:
            nx,ny=x+dx,y+dy
            if room[nx][ny]==0 and not cleaned[nx][ny]:
                d=d-1 if d-1>=0 else 3
                sx=x+direction[d][0]
                sy=y+direction[d][1]
                if room[sx][sy]==0 and not cleaned[sx][sy]:
                    x,y=sx,sy
                break
        else:
            sx=x+direction[back[d]][0]
            sy=y+direction[back[d]][1]
            if room[sx][sy]==0:
                x,y=sx,sy
            else:
                break
    return area
print(operate(r,c,d))