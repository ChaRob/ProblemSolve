import sys
N=int(input())
A=[]
for _ in range(N):
    A.append(int(sys.stdin.readline()))
print(round(sum(A)/len(A)))
A.sort()
print(A[len(A)//2])
count={}
for i in A:
    if str(i) not in count:
        count[str(i)] = 1
    else:
        count[str(i)] += 1
count_values=[]
select=[(int(x),y) for x,y in count.items() if y >= max(count.values())]
select.sort(key=lambda x:(x[1],x[0]))
if len(select) == 1:
    print(select[0][0])
elif select[0][1] > select[1][1]:
    print(select[0][0])
else:print(select[1][0])
print(A[-1]-A[0])