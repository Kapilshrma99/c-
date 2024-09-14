# def D(n):
#     if n==0 or n==2:
#         return 1
#     if n==1:
#         return 0
#     return (n-1)*(D(n-1) + D(n-2))
# n=int(input())
# print(D(n)%1000000009)
def D(n):
    a=[0 for i in range(n+1)]
    a[0]=1
    a[1]=0
    a[2]=1
    for i in range(3,n+1):    
       a[i]=(i-1)*(a[i-1] + a[i-2])
    return a[n]
n=int(input())
print(D(n)%1000000007)