for i in range(int(input())):
    amount, cash = map(int, input().split())
    lis = [int(num) for num in input().split()]
    val = ""
    for num in lis:
        if cash - num >= 0:
            cash -= num
            val += "1"
        else:
            val += "0"
    print(val)
