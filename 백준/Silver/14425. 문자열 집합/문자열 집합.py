import sys
input = sys.stdin.readline
n,m = map(int,input().split())
standard = set()
for _ in range(n):
    standard.add(input())
count = 0
for _ in range(m):
    tmp = input()
    if tmp in standard:
        count+=1
print(count)