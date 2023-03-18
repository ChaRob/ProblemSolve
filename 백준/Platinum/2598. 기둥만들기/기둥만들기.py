up_side={
    0:(1,4,3,5),
    1:(2,4,0,5),
    2:(3,4,1,5),
    3:(0,4,2,5),
    4:(1,2,3,0),
    5:(1,0,3,2)
}
square=[list(input()) for _ in range(4)]
side = []
def makeside(k,create_side,dice_seq):
    global side
    if k==4:
        check=False
        for idx,face in enumerate(side):
            for i in range(4):
                cnt=0
                for j in range(4):
                    if side[idx][j]==create_side[(i+j)%4]:
                        cnt+=1
                if cnt==4:
                    if side[idx][-1]==create_side[-1]:
                        check=True
                        break
            if check:
                break
        else:
            side.append(create_side)
        if len(side)==0:
            side.append(create_side)
    else:
        for i in range(6):
            now_side=['','','','','']
            if k==0:
                create_side[-1]=square[dice_seq[k]][i]
            for idx,face in enumerate(up_side[i]):
                now_side[idx]+=square[dice_seq[k]][face]
            for j in range(4):
                for m in range(4):
                    maded = create_side[m]+now_side[(j+m)%4]
                    count = [0, 0, 0, 0]
                    for n in range(len(maded)):
                        if maded[n] == 'R':
                            count[0] += 1
                        elif maded[n] == 'G':
                            count[1] += 1
                        elif maded[n] == 'B':
                            count[2] += 1
                        else:
                            count[3] += 1
                    if count[0] > 1 or count[1] > 1 or count[2] > 1 or count[3] > 1:
                        break
                else:
                    makeside(k+1,
                             [create_side[0]+now_side[j%4],
                              create_side[1]+now_side[(j+1)%4],
                              create_side[2]+now_side[(j+2)%4],
                              create_side[3]+now_side[(j+3)%4],
                              create_side[4]]
                             ,dice_seq)

create_side=['','','','','']
makeside(0,create_side,(3,2,1,0))
print(len(side))