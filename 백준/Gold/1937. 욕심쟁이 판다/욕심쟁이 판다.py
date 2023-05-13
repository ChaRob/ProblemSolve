import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline
delta = [(0,1), (1,0), (-1,0), (0,-1)]

def deltasearch(arr,i,j):
    if dp[i][j] != -1:
        return dp[i][j]

    dp[i][j] = 1

    for di, dj in delta:
        ni,nj = i + di, j + dj
        if 0 <= ni < N and 0 <= nj < N:
            if arr[i][j] < arr[ni][nj]:
                dp[i][j] = max(deltasearch(arr, ni, nj) + 1, dp[i][j])

    return dp[i][j]

N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]
dp = [[-1]*N for _ in range(N)]

max_cnt = 0
for i in range(N):
    for j in range(N):
        tmp = deltasearch(arr,i,j)
        max_cnt = max(max_cnt, tmp)

print(max_cnt)
