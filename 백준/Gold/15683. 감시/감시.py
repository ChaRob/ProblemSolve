import copy
n,m=map(int,input().split())
roadmaps=[list(map(int,input().split())) for _ in range(n)]
direction=[(-1,0),(1,0),(0,-1),(0,1)]
cctv_type=[
    [],
    [(0,),(1,),(2,),(3,)],
    [(0,1),(2,3)],
    [(0,2),(0,3),(1,3),(1,2)],
    [(0,1,2),(1,2,3),(2,3,0),(3,0,1)],
    [(0,1,2,3)],
]
cctv=[]
blind=0
for i in range(n):
    for j in range(m):
        if 1<=roadmaps[i][j]<=5:
            cctv.append((i,j))
        elif roadmaps[i][j]==0:
            blind+=1
minblind = blind

def watch(x,y,direct,roadmap):
    board = copy.deepcopy(roadmap)
    cnt=0
    for dir in direct:
        dx,dy=direction[dir]
        j=0
        while (0<=x+dx*j<n and 0<=y+dy*j<m):
            if board[x+dx*j][y+dy*j]==6:
                break
            elif board[x+dx*j][y+dy*j]==0:
                board[x+dx*j][y+dy*j]=-1
                cnt+=1
            j+=1

    return board,cnt

def choice(k,cnt,roadmap):
    global minblind
    if k==len(cctv):
        if minblind > blind-cnt:
            minblind = blind-cnt
    else:
        i,j=cctv[k]
        directs=cctv_type[roadmap[i][j]]
        for direct in directs:
            new_roadmap,cntv=watch(i,j,direct,roadmap)
            choice(k+1,cnt+cntv,new_roadmap)

choice(0,0,roadmaps)
print(minblind)