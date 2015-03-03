from functools import reduce
import sys
numinputs = int(input())
for dummy in range(numinputs):
    n = int(input())
    arr = [int(val) for val in input().split()]
    op = reduce(lambda x,y:x^y,arr)
    for rowindex in range(1,n):
        for columnindex in range(0,n-rowindex):
            op = op^reduce(lambda x,y:x^y,arr[columnindex:columnindex+rowindex+1])
    print(op)
