import heapq,sys
input=sys.stdin.readline
n=int(input())
edges=[]
graph=[list(map(int,input().split())) for _ in range(n)]
for i in range(n):
    for j in range(i+1,n):
        edges.append([graph[i][j],[i,j]])

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
    for _ in range(len(edges)):
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
print(dis)