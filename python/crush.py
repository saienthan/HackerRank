import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n,m],*qs = lines
op = [0] * n
maxval = 0
currval = 0
for q in qs:
    op[q[0]-1]=op[q[0]-1]+q[2]
    if q[1]!=n:
        op[q[1]]=op[q[1]]-q[2]
for val in op:
    currval = currval + val
    if currval>maxval:
        maxval = currval
print(maxval)
