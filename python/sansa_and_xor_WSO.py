from functools import reduce
import sys
numinputs = int(input())
for dummy in range(numinputs):
    n = int(input())
    arr = [int(val) for val in input().split()]
    if n%2==0:
        print(0)
        continue
    op = 0
    for val in arr[0:n:2]:
        op = op^val
    print(op)
