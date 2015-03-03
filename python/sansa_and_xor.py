from functools import reduce
import sys
numinputs = int(input())
for dummy in range(numinputs):
    n = int(input())
    arr = [int(val) for val in input().split()]
    table = [[0]*n for i in range(n)]
    for i in range(n):
        table[0][i]=arr[i]
    for rowindex in range(1,n):
        for columnindex in range(0,n-rowindex):
            table[rowindex][columnindex] = reduce(lambda x,y:x^y,table[0][columnindex:columnindex+rowindex+1])
    rowxor = []
    for row in table:
        rowxor.append(reduce(lambda x,y:x^y,row))
    print(reduce(lambda x,y:x^y,rowxor))
