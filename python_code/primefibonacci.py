num1=int(input())
num2=int(input())
def prime(num1):
    prime=[]
    for i in num1:
        flag=False
        for j in range(2,int(i**0.5)+1):
            if i%j==0:
                flag=True
                break
        if flag==False:
            prime.append(i)
    return prime

newprime=prime([i for i in range(num1,num2+1)]);
newprime2=set()
for i in newprime:
    for j in newprime:
        if i!=j:
            num=int(str(i)+str(j))
            newprime2.add(num);
prime3a=prime(newprime2)
maxi=max(prime3a)
mini=min(prime3a)
for i in range(len(prime3a) -2):
    fibo=maxi+mini
    mini=maxi
    maxi=fibo
print(maxi)