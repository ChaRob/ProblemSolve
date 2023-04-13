a=list(map(int,input().split()))
for i in range(2, 0, -1):
    for j in range(i):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]
a.pop()
print(a[-1])