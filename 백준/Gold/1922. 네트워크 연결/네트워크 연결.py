import heapq
n=int(input())
m=int(input())
graph=[[] for _ in range(n+1)]
for _ in range(m):
    a,b,c=map(int,input().split())
    graph[a].append((c,b))
    graph[b].append((c,a))
visited=[False]*(n+1)
visited[1]=True
que=graph[1]
heapq.heapify(que)
res=0
while que:
    dis,v=heapq.heappop(que)
    if not visited[v]:
        visited[v]=True
        res+=dis
        for node in graph[v]:
            if not visited[node[1]]:
                heapq.heappush(que,node)
print(res)