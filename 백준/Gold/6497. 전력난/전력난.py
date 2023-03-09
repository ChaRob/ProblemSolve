import heapq,sys
input=sys.stdin.readline
while True:
    m,n=map(int,input().split())
    if m==0 and n==0:
        break
    edges=[]
    price=0
    for _ in range(n):
        *route,meter=map(int,input().split())
        edges.append([meter,route])
        price+=meter

    heapq.heapify(edges)
    parent = [x for x in range(m + 1)]
    rank = [0] * (m + 1)

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

        for i in range(n):
            edge = heapq.heappop(edges)
            first, second = edge[1]
            if find_root(first) == find_root(second):
                continue
            mst.append(edge)
            union_root(first, second)

            if len(mst) == m - 1:
                return mst

    result_mst = kruskal()
    dis = 0
    for i in range(m - 1):
        dis += result_mst[i][0]
    print(price-dis)