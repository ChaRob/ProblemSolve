n=int(input())
k=int(input())

def search(s):
    low=1
    high=n*n
    while low<=high:
        mid = (low+high)//2
        tmp = 0
        for i in range(1,n+1):
            tmp+=min(mid//i,n)
        if tmp<s:
            low=mid+1
        else:
            high=mid-1
    return low

print(search(k))