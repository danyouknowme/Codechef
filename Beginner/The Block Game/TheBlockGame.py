for i in range(int(input())):
    num = int(input())
    temp = num
    rev = 0
    while num>0:
        dig = num%10
        rev = rev*10+dig
        num = num//10
    if temp == rev:
        print("wins")
    else:
        print("loses")
