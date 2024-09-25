n=19
for j in range(n):
    for k in range(0,n-j):
        print(" ",end=" ")
    for l in range(2*j+1):
        print("*",end=" ")
    print()
for i in range(n-3):
    for j in range(1,n-i-1):
        for k in range(0,n-j):
            print(" ",end=" ")
        for l in range(2*j+1):
            print("*",end=" ")
        print()
for i in range(2):
    for j in range(n):
        print(" ",end=" ")
    print("*")