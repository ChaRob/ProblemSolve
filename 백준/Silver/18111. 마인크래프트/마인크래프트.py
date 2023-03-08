import sys
from collections import Counter
N,M,B=map(int,sys.stdin.readline().split())
blocks=[]
for i in range(N):
    blocks+=list(map(int,sys.stdin.readline().split()))

time_min=64000000
min_target=min(blocks)
max_target=max(blocks)+1
mapfield = dict(Counter(blocks))
for target in range(min_target,max_target):
    blocks_need,blocks_dig=0,0
    for key in mapfield:
        if key > target:
            blocks_dig+=(key-target)*mapfield[key]
        elif key < target:
            blocks_need+=(target-key)*mapfield[key]
    if B+blocks_dig-blocks_need>=0:
        time=blocks_need+blocks_dig*2
        if time<=time_min:
            time_min=time
            resulth=target

print(time_min,resulth)