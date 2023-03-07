from collections import deque
import sys
input=sys.stdin.readline
n,m=map(int,input().split())
indegree=[0]*(n+1)
graph={x:[] for x in range(1,n+1)}
for _ in range(m):
    a,b=map(int,input().split())
    graph[a].append(b)
    indegree[b]+=1
que=deque()
for i in range(1,n+1):
    if indegree[i]==0:
        que.append(i)
result=[]

while que:
    x=que.popleft()
    result.append(x)
    for v in graph[x]:
        indegree[v]-=1
        if indegree[v]==0:
            que.append(v)
print(*result)