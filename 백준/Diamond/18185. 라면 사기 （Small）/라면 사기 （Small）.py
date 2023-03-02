import sys
input=sys.stdin.readline
n=int(input())
A=[0]+list(map(int,input().split()))+[0,0]
price=0
i=1
while i<=n:
    if A[i+1]<=A[i+2]:
        tmp=min(A[i],min(A[i+1],A[i+2]))
        A[i]-=tmp
        A[i+1]-=tmp
        A[i+2]-=tmp
        price+=7*tmp

        tmp=min(A[i],A[i+1])
        A[i]-=tmp
        A[i+1]-=tmp
        price+=5*tmp
    else:
        tmp=min(A[i],A[i+1]-A[i+2])
        A[i]-=tmp
        A[i+1]-=tmp
        price+=5*tmp

        tmp=min(A[i],min(A[i+1],A[i+2]))
        A[i]-=tmp
        A[i+1]-=tmp
        A[i+2]-=tmp
        price+=7*tmp

    price+=3*A[i]
    A[i]=0
    i+=1
print(price)