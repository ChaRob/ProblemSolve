import copy
direction=[(-1,0),(-1,-1),(0,-1),(1,-1),(1,0),(1,1),(0,1),(-1,1)]
space=[]
fish_xy=[()]*17
fish_xy[0]=0
for i in range(4):
    a1,b1,a2,b2,a3,b3,a4,b4=map(int,input().split())
    space.append([[a1,b1-1],[a2,b2-1],[a3,b3-1],[a4,b4-1]])
    fish_xy[a1]=(i,0)
    fish_xy[a2]=(i,1)
    fish_xy[a3]=(i,2)
    fish_xy[a4]=(i,3)

eatfish_sum=space[0][0][0]
shark_x,shark_y=0,0
shark_dir=space[0][0][1]
fish_xy[space[0][0][0]]=0
space[shark_x][shark_y]=[20,shark_dir]
max_eatfish=eatfish_sum

def fishmove():
    for i in range(1,17):
        if fish_xy[i]!=0:
            cnt=0
            x,y=fish_xy[i]
            b=space[x][y][1]
            while cnt<8:
                dx,dy=direction[(b+cnt)%8]
                nx,ny=x+dx,y+dy
                if 0<=nx<4 and 0<=ny<4 and space[nx][ny][0]!=20:
                    nfish=space[nx][ny][0]
                    space[x][y],space[nx][ny]=space[nx][ny],space[x][y]
                    if nfish==0:
                        fish_xy[i] = (nx,ny)
                    else:
                        fish_xy[i],fish_xy[nfish]=fish_xy[nfish],fish_xy[i]
                    break
                cnt+=1
                space[x][y][1]=(b+cnt)%8

def sharkmove(i,j,sd):
    global eatfish_sum,max_eatfish,space,fish_xy
    fishmove()
    now_space=copy.deepcopy(space)
    now_fishxy=copy.deepcopy(fish_xy)
    di,dj=direction[sd]
    for cnt in range(1,4):
        ni,nj=i+di*cnt,j+dj*cnt
        if 0<=ni<4 and 0<=nj<4 and space[ni][nj][0]!=0:
            deadfish=space[ni][nj][0]
            space[ni][nj][0]=20
            tmp_xy=fish_xy[deadfish]
            tmp_dir=space[ni][nj][1]
            fish_xy[deadfish]=0
            eatfish_sum+=deadfish
            max_eatfish=max(max_eatfish,eatfish_sum)
            space[i][j]=(0,0)
            sharkmove(ni,nj,space[ni][nj][1])
            eatfish_sum-=deadfish
            space=copy.deepcopy(now_space)
            fish_xy=copy.deepcopy(now_fishxy)

sharkmove(shark_x,shark_y,shark_dir)
print(max_eatfish)