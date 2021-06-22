n, k = map(int,input().split())
l = []
rel = 0
for i in range(k):
    test = list(map(str,input().split()))
    if test[0] == "CLOSEALL":
        rel = 0
        l.clear()
    elif test[1] in l:
        rel -= 1
        l.remove(test[1])
    else:
        rel += 1
        l.append(test[1])
    print(rel)
