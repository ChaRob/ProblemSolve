def choice(j,t,arr):
    if t==k+1:
        print(*arr)
    else:
        for i in range(j,t):
            choice(i+1,t+1,arr+[S[i]])

while True:
    k,*S=map(int,input().split())
    if k==0:
        break
    choice(0,k-6+1,[])
    print()