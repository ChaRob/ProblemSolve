from heapq import *
k,n=map(int,input().split())
prime=list(map(int,input().split()))
que=prime.copy()
visited=set(prime)
top=1
max_value=prime[-1]
while top<=n:
    top_x=heappop(que)
    top+=1
    nowlen=len(que)
    for i in range(k):
        addnum=top_x*prime[i]
        if nowlen>n and max_value<addnum:
            continue
        if addnum not in visited:
            max_value=max(max_value,addnum)
            heappush(que,addnum)
            visited.add(addnum)
print(top_x)