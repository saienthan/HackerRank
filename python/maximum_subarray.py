t = int(input())
while t > 0:
    n = int(input())
    inp = list(map(int, input().split()))
    maxcur = inp[0]
    maxhere = inp[0] 
    maxnoncontig = 0
    for i in inp:
        if i > 0:
            maxnoncontig += i
    for i in inp[1:]:
        maxhere = max(i, maxhere + i)
        maxcur = max(maxcur, maxhere)
    if maxnoncontig == 0:
        maxnoncontig = inp[0]
    print(maxcur, maxnoncontig)
    t -= 1
