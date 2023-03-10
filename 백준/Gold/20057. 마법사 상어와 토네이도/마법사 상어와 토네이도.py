n=int(input())
sand=[list(map(int,input().split())) for _ in range(n)]
visited=[[False]*n for _ in range(n)]
i,j,d=0,0,0
cnt=n*n-2
tornado_route=[(0,1),(1,0),(0,-1),(-1,0)]
tornado_xy=[(0,0,0)]
visited[0][0]=True
while cnt!=0:
    ni,nj=i+tornado_route[d][0],j+tornado_route[d][1]
    if 0<=ni<n and 0<=nj<n:
        if not visited[ni][nj]:
            visited[ni][nj]=True
            tornado_xy.append((ni,nj,d))
            cnt-=1
            i,j=ni,nj
        else:
            d=(d+1)%4
    else:
        d=(d+1)%4
sand_spread=[
    [(0,-2,5),(-1,-1,10),(1,-1,10),(-2,0,2),(-1,0,7),(1,0,7),(2,0,2),(-1,1,1),(1,1,1)],
    [(-2,0,5),(-1,-1,10),(-1,1,10),(0,-2,2),(0,-1,7),(0,1,7),(0,2,2),(1,-1,1),(1,1,1)],
    [(0,2,5),(1,1,10),(-1,1,10),(-2,0,2),(-1,0,7),(1,0,7),(2,0,2),(1,-1,1),(-1,-1,1)],
    [(2,0,5),(1,1,10),(1,-1,10),(0,-2,2),(0,-1,7),(0,1,7),(0,2,2),(-1,1,1),(-1,-1,1)]
]
now_d,blow_sand=0,0
rest_sand_direct=[(0,-1),(-1,0),(0,1),(1,0)]
while tornado_xy:
    x,y,next_d=tornado_xy.pop()
    if sand[x][y]:
        rest_sand=sand[x][y]
        for dx,dy,percent in sand_spread[now_d]:
            nx,ny=x+dx,y+dy
            blowed=int((sand[x][y]*percent)/100)
            if nx>=n or nx<0 or ny>=n or ny<0:
                blow_sand+=blowed
            else:
                sand[nx][ny]+=blowed
            rest_sand-=blowed
        dx,dy=rest_sand_direct[now_d]
        if x+dx>=n or x+dx<0 or y+dy>=n or y+dy<0:
            blow_sand+=rest_sand
        else:
            sand[x+dx][y+dy]+=rest_sand
        sand[x][y]=0
    now_d=next_d

print(blow_sand)