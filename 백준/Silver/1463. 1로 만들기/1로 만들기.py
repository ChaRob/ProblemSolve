n=int(input())
flist=[0,0,1,1]+[0]*(n-3)
for i in range(4,n+1):
    if i%2 ==0 and i%3 ==0:
        flist[i]=min(flist[i//2],flist[i//3])+1
    elif i%2 ==0 and i%3 !=0:
        if flist[i//2] > flist[i-1]:
            flist[i]=flist[i-1]+1
        else:
            flist[i]+=flist[i//2]+1
    elif i%2 !=0 and i%3 ==0:
        if flist[i//3] > flist[i-1]:
            flist[i]=flist[i-1]+1
        else:
            flist[i]+=flist[i//3]+1
    else:
        flist[i]=flist[i-1]+1
    
print(flist[n])