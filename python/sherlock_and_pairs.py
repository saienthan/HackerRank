numinputs = int(input())
from functools import reduce
ctable = {}
def nCk(n,k): 
    try:
        rv = ctable[n]
    except:
        rv = ctable[n]=int(reduce(lambda x,y:x*y, (Fraction(n-i, i+1) for i in range(k)), 1) )
    return rv
from fractions import Fraction
for dummy in range(numinputs):
    n = int(input())
    a = [int(val) for val in input().split()]
    dc = {}
    for i in range(n):
        dc[i] = a[i]
    sorteddc = sorted(dc,key=lambda x:dc[x])
    count = 0
    currcount = 0
    ind = 0
    while True:
        if ind==n-1:
            count = count + nCk(currcount+1,2)
            break
        if dc[sorteddc[ind]]==dc[sorteddc[ind+1]]:
            currcount = currcount+1
        else:
            count = count + nCk(currcount+1,2)
            currcount = 0
        ind = ind+1
    print(2*count)


