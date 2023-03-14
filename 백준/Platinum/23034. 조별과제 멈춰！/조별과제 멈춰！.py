from heapq import *
from collections import deque
import sys
input=sys.stdin.readline
n,m=map(int,input().split())
edges=[]
for _ in range(m):
    a,b,c=map(int,input().split())
    edges.append([c,[a,b]])

heapify(edges)
parent=[x for x in range(n+1)]
rank=[0]*(n+1)

def find_root(x):
    if parent[x]==x:
        return x
    parent[x]=find_root(parent[x])
    return parent[x]

def union_root(x,y):
    px=find_root(x)
    py=find_root(y)
    if px==py:
        return

    if rank[px]<rank[py]:
        parent[px]=py
    else:
        parent[py]=px
        if rank[px]==rank[py]:
            rank[px]+=1

def kruskal():
    mst=[]
    for i in range(len(edges)):
        edge=heappop(edges)
        first,second=edge[1]
        if find_root(first)==find_root(second):
            continue
        union_root(first,second)
        mst.append(edge)

        if len(mst)==n-1:
            return mst

mst=kruskal()
max_dist=0
for edge in mst:
    max_dist+=edge[0]
graph=[[] for _ in range(n+1)]
for d,nodes in mst:
    graph[nodes[0]].append((d,nodes[1]))
    graph[nodes[1]].append((d,nodes[0]))

dp=[[0]*(n+1) for _ in range(n+1)]
def bfs(start):
    que=deque([(0,start)])
    visited=[False]*(n+1)
    while que:
        maxdist,node=que.popleft()
        if not visited[node]:
            visited[node]=True
            for d,v in graph[node]:
                if not visited[v]:
                    x=max(maxdist,d)
                    que.append((x,v))
                    dp[start][v]=x
for i in range(1, n+1):
    bfs(i)

Q=int(input())
for _ in range(Q):
    X,Y=map(int,input().split())
    if X>Y:
        X,Y=Y,X
    print(max_dist-dp[X][Y])