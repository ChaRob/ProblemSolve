A=list(map(int,input().split()))
B=list(map(int,input().split()))
C=list(map(int,input().split()))
N=[A[0],B[0],C[0]]
M=[A[1],B[1],C[1]]
for i in range(3):
    if N.count(N[i])==1:
        print(N[i], end=" ")
        break
for i in range(3):
    if M.count(M[i])==1:
        print(M[i])
        break
