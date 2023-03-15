from collections import deque
import sys
input=sys.stdin.readline
n,m,k,x=map(int,input().split())
graph={i:[] for i in range(1,n+1)}
visited=[False]*(n+1)
dist=[0]*(n+1)
for _ in range(m):
    a,b=map(int,input().split())
    graph[a]+=[b]
que=deque()
que.append(x)
visited[x]=True
while que:
    v = que.popleft()
    for w in graph[v]:
        if not visited[w]:
            visited[w]=True
            que.append(w)
            dist[w]=dist[v]+1
res=[]
for idx,v in enumerate(dist):
    if v==k:
        res.append(str(idx))
if len(res)==0: print(-1)
else:           print('\n'.join(res))