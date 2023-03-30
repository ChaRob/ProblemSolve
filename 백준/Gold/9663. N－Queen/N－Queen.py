n=int(input())
canput=[True]*n
canput_diagl=[True]*(2*n-1)
canput_diagr=[True]*(2*n-1)
result=0
col=[]
def putchess(k):
    global result
    if k==n:
        result+=1
    else:
        for i in range(n):
            if canput[i] and canput_diagl[i-k] and canput_diagr[i+k]:
                canput[i]=False
                canput_diagl[i-k]=False
                canput_diagr[i+k]=False
                putchess(k+1)
                canput[i]=True
                canput_diagl[i-k]=True
                canput_diagr[i+k]=True
putchess(0)
print(result)