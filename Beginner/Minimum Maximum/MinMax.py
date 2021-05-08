# cook your dish here
for i in range(int(input())):
    arr_sz = int(input())
    arr = list(map(int, input().split()))
    minimum = min(arr)
    print(minimum*(arr_sz-1))
