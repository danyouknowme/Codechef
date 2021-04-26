n = int(input())
l = []
for i in range(n):
    hardness, carbon, tensile = map(float, input().split())
    if hardness > 50 and carbon < 0.7 and tensile > 5600:
        result = 10
    elif hardness > 50 and carbon < 0.7:
        result = 9
    elif carbon < 0.7 and tensile > 5600:
        result = 8
    elif hardness > 50 and tensile > 5600:
        result = 7
    elif hardness > 50 or carbon < 0.7 or tensile > 5600:
        result = 6
    else:
        result = 5
    print(result)
