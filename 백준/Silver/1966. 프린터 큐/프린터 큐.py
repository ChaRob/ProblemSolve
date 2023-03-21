import sys
from collections import deque
T=int(input())
for _ in range(T):
    N,target_paper=map(int,sys.stdin.readline().split())
    papers=list(map(int,sys.stdin.readline().split()))
    papers_tuple = deque()
    for x,y in enumerate(papers):
        if x==target_paper: papers_tuple.append((1,int(y)))
        else:               papers_tuple.append((0,int(y)))
    i=0
    while True:
        if papers_tuple[0][1] >= max(papers):
            check=papers_tuple.popleft()
            papers.remove(check[1])
            i+=1
            if check[0]==1:
                print(i)
                break
        else: papers_tuple.append(papers_tuple.popleft())
