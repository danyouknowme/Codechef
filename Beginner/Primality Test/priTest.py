# cook your dish here
for i in range(int(input())):
    number = int(input())
    is_prime = 0
    for j in range(1, number+1):
        if number % j == 0:
            is_prime += 1
    if is_prime == 2:
        print("yes")
    else:
        print("no")
