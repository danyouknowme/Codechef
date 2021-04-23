# cook your dish here
a = int(input())
b = int(input())
area = a * b
peri = 2 * (a+b)
if area > peri:
    print('Area')
    print(area)
elif area < peri:
    print("Peri")
    print(peri)
else:
    print('Eq')
    print(area)
