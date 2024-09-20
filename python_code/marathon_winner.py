from collections import Counter

n=int(input())
t=int(input())
participant=[]
list1=[]
list2=[]
for i in range(n):
    k=list(map(int,input().split()))
    distance=k[-1]
    k.pop()
    b=[]
    sum1=0
    for i in k:
        r=i*distance
        sum1+=r
        b.append(sum1)
    list1.append(b)
for i in range(t):
    list2.append(list(list(zip(*list1))[i]))
# print(list2) 
for i in range(1,t,2):
    m=max(list2[i])
    for j in range(len(list2[i])):
        if(m==list2[i][j]):
            participant.append(j+1)
res = dict(Counter(participant))
l1 = list(res.values())
l2 = list(res.keys())
print(l2[l1.index(max(l1))])
