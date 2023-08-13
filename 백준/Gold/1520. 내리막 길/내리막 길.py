import sys
input = sys.stdin.readline

n,m=map(int,input().split())
graph = [list(map(int,input().split())) for _ in range(n)]
visited = [[-1]*m for i in range(n)]

def dfs(x,y):
    if x==n-1 and y==m-1:
        return 1
    visited[x][y] = 0

    for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
        nx,ny = x+dx,y+dy
        if 0<=nx<n and 0<=ny<m and graph[nx][ny] < graph[x][y]:
            if visited[nx][ny]==-1:
                visited[x][y] += dfs(nx,ny)
            else:
                visited[x][y] += visited[nx][ny]

    return visited[x][y]

print(dfs(0,0))