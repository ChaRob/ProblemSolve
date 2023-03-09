import sys
input=sys.stdin.readline
t=int(input())
def move(house,route,festival):
    que=[house]
    visited=[False]*len(route)
    while que:
        x,y=que.pop(0)
        if x==festival[0] and y==festival[1]:
            return 'happy'
        for i in range(len(route)):
            if abs(x-route[i][0])+abs(y-route[i][1])<=1000 and not visited[i]:
                que.append(route[i])
                visited[i]=True
    return 'sad'

for _ in range(t):
    n=int(input())
    house=list(map(int,input().split()))
    conv=[]
    for _ in range(n):
        conv.append(list(map(int,input().split())))
    festival=list(map(int,input().split()))
    print(move(house,conv+[festival],festival))