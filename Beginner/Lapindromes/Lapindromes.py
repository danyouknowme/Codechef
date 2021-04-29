# cook your dish here
for i in range(int(input())):
    string = input()
    if len(string) % 2 == 0:
        s1 = string[:len(string)//2]
        s2 = string[len(string)//2:]
    else:
        s1 = string[:len(string)//2]
        s2 = string[len(string)//2+1:]
    print("YES" if "".join(sorted(list(s1)))=="".join(sorted(list(s2))) else "NO")
