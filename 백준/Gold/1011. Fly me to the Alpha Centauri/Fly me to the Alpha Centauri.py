check=[0]*200001
for i in range(0,len(check)//2,2):
    check[i-1]=round(i//2)**2; check[i]=check[i-1]+round(i//2)
T=int(input())
for _ in range(T):
    x,y=map(int,input().split())
    distance=y-x
    for k in range(200000):
        if check[k]<distance<=check[k+1]:
            print(k+1)
            break