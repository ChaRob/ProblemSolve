# from collections import deque
# n=int(input())
# graph=[[] for _ in range(n+1)]
from collections import deque
import sys
input = sys.stdin.readline
n = int(input())
graph=[set() for _ in range(n+1)]
for _ in range(n-1):
    a,b=map(int,input().split())
    graph[a].add(b)
    graph[b].add(a)
sequence=list(map(int,input().split()))
visited=[False]*(n+1)
visited[1]=True
que=deque([1])
cnt=1
res=1
if sequence[0]!=1:
    res=0
else:
    while que:
        x=que.popleft()
        while cnt!=n:
            if sequence[cnt] in graph[x]:
                visited[sequence[cnt]]=True
                que.append(sequence[cnt])
                cnt+=1
            else:
                break
    if cnt!=n:
        res=0
print(res)