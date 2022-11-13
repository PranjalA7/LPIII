'''
Name: Asmeeta Lalit Bardiya
Class: BE-A-22
Lab Assignment No: 6
'''
def partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1
            (array[i], array[j]) = (array[j], array[i])
    (array[i + 1], array[high]) = (array[high], array[i + 1])
    return i + 1

def quickSort(array, low, high):
    if low < high:
        pi = partition(array, low, high)

        # Recursive call on the left of pivot
        quickSort(array, low, pi - 1)
        # Recursive call on the right of pivot
        quickSort(array, pi + 1, high)


data = []
print("Enter number of elements to sort")
size=int(input())
print("Enter input numbers:")
for i in range(size):
    s=int(input())
    data.append(s)
print("Unsorted Array")
print(data)

quickSort(data, 0, size - 1)

print('Sorted Array in Ascending Order:')
print(data)

'''OUTPUT
Enter number of elements to sort
8
Enter input numbers:
56
34
44
89
12
46
7
8
Unsorted Array
[56, 34, 44, 89, 12, 46, 7, 8]
Sorted Array in Ascending Order:
[7, 8, 12, 34, 44, 46, 56, 89]
'''