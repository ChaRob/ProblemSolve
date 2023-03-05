n=int(input())
S=[[0]*(n+1)]+[[0]+list(map(int,input().split())) for _ in range(n)]
min_stat=9999999
person_num=[i for i in range(n+1)]

def cal(arr):
    start_team=arr.copy()
    link_team=[i for i in range(1,n+1) if i not in start_team]
    start_team_stat=0
    link_team_stat=0
    for i in start_team:
        for j in start_team:
            start_team_stat+=S[i][j]
    for i in link_team:
        for j in link_team:
            link_team_stat+=S[i][j]
    stat=abs(start_team_stat-link_team_stat)
    return stat

def choice(j,k,arr):
    global min_stat
    if k==n//2:
        stat=cal(arr)
        min_stat=min(min_stat,stat)
    elif k==0:
        arr.append(person_num[1])
        choice(2,k+1,arr)
    else:
        for i in range(j,len(person_num)):
            arr.append(person_num[i])
            choice(i+1,k+1,arr)
            arr.pop()
choice(1,0,[])
print(min_stat)