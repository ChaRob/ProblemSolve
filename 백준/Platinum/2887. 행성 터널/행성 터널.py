import sys
input=sys.stdin.readline
n=int(input())
edges=[]
graph=[]
for i in range(n):
    x,y,z=map(int,input().split())
    graph.append([i,x,y,z])
for i in range(1,4):
    graph.sort(key=lambda x: x[i])
    e=[[abs(x[i]-y[i]),x[0],y[0]] for x,y in zip(graph[:-1],graph[1:])]
    edges+=e

parent = [x for x in range(n + 1)]
rank = [0] * (n + 1)

def find_root(x):
    if parent[x] == x:
        return x
    parent[x] = find_root(parent[x])
    return parent[x]

def union_root(x, y):
    x = find_root(x)
    y = find_root(y)
    if x == y: return

    if rank[x] < rank[y]:
        parent[x] = y
    else:
        parent[y] = x
        if rank[x] == rank[y]:
            rank[x] += 1

def kruskal():
    mst = []
    edges.sort()
    for edge in edges:
        first, second = edge[1],edge[2]
        if find_root(first) == find_root(second):
            continue
        mst.append(edge)
        union_root(first, second)

        if len(mst) == n - 1:
            return mst

result_mst = kruskal()
dis = 0
for i in range(n - 1):
    dis += result_mst[i][0]
print(dis)