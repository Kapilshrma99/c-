size=int(input())
x=[int(i) for i in input().split(" ")]
y=originalPosition=[1,2,3,4,5,6]
z=[0 for i in range(size)]
count=0
while True:
    for i in range(size):
        print("k")
        z[x[i]]=y[i]
    if z==originalPosition:
        break
    count+=1