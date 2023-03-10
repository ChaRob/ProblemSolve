import heapq

v, e = map(int, input().split())
indegree = [0] * (v + 1)
graph = [[] for _ in range(v + 1)]

for _ in range(e):
    a, b = map(int, input().split())
    graph[a].append(b)
    indegree[b] += 1

def topology_sort():
    result = []
    q = []

    for i in range(1, v + 1):
        if indegree[i] == 0:
            heapq.heappush(q,i)

    while q:
        now = heapq.heappop(q)
        result.append(now)
        for g in graph[now]:
            indegree[g] -= 1
            if indegree[g] == 0:
                heapq.heappush(q,g)

    for res in result:
        print(res, end=' ')

topology_sort()