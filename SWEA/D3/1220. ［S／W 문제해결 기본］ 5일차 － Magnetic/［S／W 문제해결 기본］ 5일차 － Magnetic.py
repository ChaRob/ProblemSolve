for t in range(10):
    size=int(input())
    table=[list(map(int,input().split())) for _ in range(size)]
    check=False
    res=0
    for j in range(size):
        for i in range(size):
            if table[i][j]==1:
                check=True
            elif table[i][j]==2 and check:
                check=False
                res+=1
        check=False

    print(f'#{t+1} {res}')