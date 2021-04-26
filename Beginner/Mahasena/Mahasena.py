# cook your dish here
n = int(input())
lst = list(map(int, input().split()))
even, odd = 0, 0
for i in range(n):
    if lst[i] % 2 == 0:
        even += 1
    else:
        odd += 1
print("READY FOR BATTLE" if even > odd else "NOT READY")
