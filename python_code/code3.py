n=int(input("please enter your number:"))
prime=[]
count=0
prime=[i for i in range(2,n+1) if all(i%j!=0 for j in range(2, int(i**0.5)+1))]
for i in range(2,len(prime)):
    sum=0
    for j in prime:
        sum+=j
        if sum==prime[i]:
            count+=1
            break
        if sum>prime[i]:
            break
print(count)