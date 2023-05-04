T=int(input())
for _ in range(T):
    a,b=map(int,input().split())
    x=pow(a%10,b%4+4)%10
    print(x if x != 0 else '1'+str(x))