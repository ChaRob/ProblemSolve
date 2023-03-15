n,k=map(int,input().split())
num=list(input())
stack=[]
cnt=k
for i in range(n):
    while cnt>0 and len(stack)!=0:
        if stack[-1] < num[i]:
            stack.pop()
            cnt-=1
        else:
            break
    stack.append(num[i])
for x in range(n-k):
    print(stack[x],end='')