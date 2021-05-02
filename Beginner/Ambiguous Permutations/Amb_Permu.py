while True:
    arr_sz = int(input())
    if arr_sz == 0:
        break
    arr = list(map(int, input().split()))
    num = [i for i in range(1, arr_sz+1)]
    zeros = [0]*arr_sz
    for i in range(arr_sz):
        zeros[arr[i]-1] = num[i]
    if arr == zeros:
        print("ambiguous")
    else:
        print("not ambiguous")
