c=int(input())
d={}
colloision=0
for i in range(c):
    x,y,speed=list(map(int,input().split()))
    sq_time=(x**2+y**2)/speed**2
    if d.get(sq_time)==None:
        d[sq_time]=1
    else:
        d[sq_time]+=1
for i in d:
    if (d[i]!=1):
        colloision+=(d[i]*(d[i]-1))/2
print(colloision)