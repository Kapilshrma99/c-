arr = [1,2,3,4,5]
arrtime = []
n = int(input("Enter the size of the array: "))
for i in range(1,n):
    sum_of_last_two = arr[0] + arr[1]
    arrtime.append(sum_of_last_two)
    arr.append(sum_of_last_two)
    arr.pop(0)
    arr.pop(0)
    arr.sort()
print("Sums of the last two elements:", arrtime)
print("Final array:", arr)
