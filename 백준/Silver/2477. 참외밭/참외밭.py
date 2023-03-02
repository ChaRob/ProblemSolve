k=int(input())
t=[[] for _ in range(2)]
data=[0]*6
max_l,max_h=0,0
l_idx,h_idx=0,0
for x in range(6):
    way,d=map(int,input().split())
    if way==1 or way==2:
        if max_l<d:
            max_l=d
            l_idx=x
        t[0].append(d)
    else:
        if max_h<d:
            max_h=d
            h_idx=x
        t[1].append(d)
    data[x]=d
t[0].remove(data[(h_idx-1)%6])
t[0].remove(data[(h_idx+1)%6])
t[1].remove(data[(l_idx-1)%6])
t[1].remove(data[(l_idx+1)%6])
print((max_l*max_h-t[0][0]*t[1][0])*k)