n=int(input("enter length of string: "))
str=input("enter string of length: ")
q=int(input("enter query"))
for  i in range(q):
    count=0
    loc=int(input("enter location:"))
    for i in range(loc):
        if str[i]==str[loc-1]:
            count+=1
    print(count-1)