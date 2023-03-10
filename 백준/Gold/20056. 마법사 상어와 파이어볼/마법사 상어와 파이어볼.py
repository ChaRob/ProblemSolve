direction=[(-1,0),(-1,1),(0,1),(1,1),(1,0),(1,-1),(0,-1),(-1,-1)]
n,m,k=map(int,input().split())
fireball=[]
fireball_info=[]
for i in range(m):
    r,c,m,s,d=map(int,input().split())
    fireball.append([r-1,c-1])
    fireball_info.append([m,s,d])

def fireball_move(area,fireball,fireball_info):
    new_fireball=[]
    new_fireball_info=[]
    for i in range(n):
        for j in range(n):
            if len(area[i][j])>1:
                sm=0
                ss=0
                sd=[]
                for l in area[i][j]:
                    sm+=fireball_info[l][0]
                    ss+=fireball_info[l][1]
                    sd.append(fireball_info[l][2]%2)
                sm=sm//5
                ss=ss//len(area[i][j])
                if sm>0:
                    t=1
                    if sum(sd)==len(area[i][j]) or sum(sd)==0:
                        t=0
                    for x in range(t,8,2):
                        new_fireball.append([i,j])
                        new_fireball_info.append([sm,ss,x])
            elif len(area[i][j])==1:
                new_fireball.append([i,j])
                new_fireball_info.append(fireball_info[area[i][j][0]])

    return new_fireball,new_fireball_info

while k>0:
    area = [[[] for _ in range(n)] for _ in range(n)]
    for i in range(len(fireball)):
        x,y=fireball[i]
        m,s,d=fireball_info[i]
        nx,ny=(x+s*direction[d][0])%n,(y+s*direction[d][1])%n
        area[nx][ny].append(i)
    fireball,fireball_info=fireball_move(area,fireball,fireball_info)
    k-=1

weight=0
for i in range(len(fireball)):
    weight+=fireball_info[i][0]
print(weight)