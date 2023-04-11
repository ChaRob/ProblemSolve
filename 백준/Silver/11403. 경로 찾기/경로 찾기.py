n=int(input())
graph={x:[] for x in range(n)}
for i in range(n):
    connect=list(map(int,input().split()))
    for j in range(n):
        if connect[j]==1:
            graph[i]+=[j]
isroute=[[0]*n for _ in range(n)]
for v in range(n):
    que=[v]
    visited=[False]*n
    while que:
        x=que.pop(0)
        for t in graph[x]:
            if not visited[t]:
                visited[t]=True
                que.append(t)
                isroute[v][t]=1
for i in range(n):
    print(*isroute[i])