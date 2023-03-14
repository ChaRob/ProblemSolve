from heapq import *
import sys
input=sys.stdin.readline
n,e=map(int,input().split())
graph=[[] for _ in range(n+1)]
for _ in range(e):
    a,b,c=map(int,input().split())
    graph[a].append((c,b))
    graph[b].append((c,a))
v1,v2=map(int,input().split())

def dijstra(start):
    que = [(0,start)]
    heapify(que)
    dist=[1000000000]*(n+1)
    dist[start]=0
    while que:
        mindist,node=heappop(que)
        if dist[node] > mindist:
            continue
        for d,v in graph[node]:
            if dist[v] > d + dist[node]:
                dist[v] = d + dist[node]
                heappush(que, (dist[v], v))
    return dist
start=dijstra(1)
node1=dijstra(v1)
node2=dijstra(v2)
res=min(start[v1]+node1[v2]+node2[n],start[v2]+node2[v1]+node1[n])
print(res if res<1000000000 else -1)