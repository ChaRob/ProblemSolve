import math,heapq
n=int(input())
star=[0]+[list(map(float,input().split())) for _ in range(n)]
edges=[]
for i in range(1,n):
    for j in range(i+1,n+1):
        edges.append([math.sqrt((star[i][0]-star[j][0])**2+(star[i][1]-star[j][1])**2),[i,j]])

heapq.heapify(edges)
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

    for i in range(len(edges)):
        edge = heapq.heappop(edges)
        first, second = edge[1]
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
print(round(dis,2))
