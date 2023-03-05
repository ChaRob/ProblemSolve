import sys,heapq
input=sys.stdin.readline
v,e=map(int,input().split())
graph=[[] for _ in range(v+1)]
visited=[False]*(v+1)
for _ in range(e):
    a,b,c = map(int,input().split())
    graph[a].append((c,b))
    graph[b].append((c,a))
que=graph[1]
heapq.heapify(que)
visited[1]=True
res=0
while que:
    dis,node=heapq.heappop(que)
    if not visited[node]:
        res+=dis
        visited[node]=True
        for edge in graph[node]:
            if not visited[edge[1]]:
                heapq.heappush(que,edge)
print(res)