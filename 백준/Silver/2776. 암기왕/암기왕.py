import sys
input = sys.stdin.readline

def binary_search(arr, value):
    first, last = 0, len(arr)
    if(arr[last-1] < value or arr[first] > value):
        return 0

    while first <= last:
        mid = (first + last) // 2
        if arr[mid] == value:
            return 1
        if arr[mid] > value:
            last = mid - 1
        else:
            first = mid + 1
    return 0

T = int(input())
for t in range(T):
    n = int(input())
    Nn = list(map(int,input().split()))
    Nn.sort()
    m = int(input())
    Mn = list(map(int,input().split()))
    for num in Mn:
        print(binary_search(Nn, num))