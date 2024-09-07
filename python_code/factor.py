import math
num =1000000000
factor=[]
for i in range(1,int(math.sqrt(num))+1):
    if num%i==0:
        factor.append(i)
        factor.append(num//i)
factor.sort()
if len(factor)<7:
    print(1)
else:
    print(factor[-7])