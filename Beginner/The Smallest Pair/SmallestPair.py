# cook your dish here
for i in range(int(input())):
    arr_sz = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    print(arr[0] + arr[1])
