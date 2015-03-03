numinputs = int(input())
for dumm in range(numinputs):
    [m,n] = [int(val) for val in input().split()]
    x = [int(val) for val in input().split()]
    y = [int(val) for val in input().split()]
    cost = 0
    v = 1
    h = 1
    comb = []
    for val in x:
        comb.append((val,"hor"))
    for val in y:
        comb.append((val,"ver"))
    comb = sorted(comb,key=lambda x:x[0],reverse=True)
    for val in comb:
        if val[1]=="hor":
            cost = (cost+(val[0]*v))%1000000007
            h+=1
        else:
            cost = (cost+(val[0]*h))%1000000007
            v+=1
    print(cost)


