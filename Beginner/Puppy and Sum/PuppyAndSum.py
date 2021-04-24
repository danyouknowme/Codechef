# cook your dish here
n = int(input())
for i in range(n):
    a, b = map(int, input().split())
    for i in range(a):
        ans = (b*(b+1))/2
        b = ans
    print(int(ans))
