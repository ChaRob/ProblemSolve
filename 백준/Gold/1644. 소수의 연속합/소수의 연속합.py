n = int(input())
IsPrimeArray=[True for _ in range(n+1)]
for i in range(2, int(n**0.5)+1):
    if IsPrimeArray[i] == True:
        j = 2
        while i*j <= n:
            IsPrimeArray[i*j]=False
            j+=1
prime=[]
for i in range(2,n+1):
    if IsPrimeArray[i]:
        prime.append(i)
prime.append(n)
i,j=0,1
cnt=0
prime_sum=prime[i]
while i<j and j<len(prime):
    if prime_sum==n:
        cnt+=1
        prime_sum-=prime[i]
        i+=1
    elif prime_sum<n:
        prime_sum+=prime[j]
        j+=1
    elif prime_sum>n:
        prime_sum -= prime[i]
        i+=1
print(cnt)