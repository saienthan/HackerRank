t = int(input())
while t > 0:
    t -= 1
    s1 = list(input())
    s2 = list(input())
    l1 = len(s1)
    l2 = len(s2)
    op = []
    while l1 > 0 and l2 > 0:
        if s1 > s2:
        #    op.append(s2.pop(0))
            print(s2.pop(0), end = "")
            l2 -= 1
        else:
            #op.append(s1.pop(0))
            print(s1.pop(0), end = "")
            l1 -= 1
    if l1 > 0:
        print("".join(s1), end = "")
    elif l2 > 0:
        print("".join(s2), end = "")
    print()
