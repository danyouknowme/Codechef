for i in range(int(input())):
    sum = 0
    num = int(input())
    while num:
        sum += num//5
        num = num//5
    print(sum)
