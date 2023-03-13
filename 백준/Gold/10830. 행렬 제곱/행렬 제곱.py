n,b=map(int,input().split())
a=[list(map(int,input().split())) for _ in range(n)]

def matrix_multiply(matrix_f,matrix_b):
    if len(matrix_f)!=len(matrix_b[0]):
        raise IndexError
    result_matrix=[[0]*len(matrix_f) for _ in range(len(matrix_b[0]))]
    for i in range(len(matrix_f)):
        for j in range(len(matrix_b[0])):
            result_matrix[i][j]=sum([(matrix_f[i][x]*matrix_b[x][j]) for x in range(len(matrix_f[0]))])%1000
    return result_matrix

def power(matrix,p):
    if p==1:
        z=[[0]*n for _ in range(n)]
        for i in range(n):
            z[i][i]=1
        return matrix_multiply(matrix,z)
    partial = power(matrix,p//2)
    partial_two = matrix_multiply(partial,partial)
    if p%2:
        return matrix_multiply(partial_two,matrix)
    else:
        return partial_two

res=power(a,b)
for i in range(n):
    print(*res[i])