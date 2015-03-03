from functools import reduce
import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n] , numb = lines
total = sum(numb)
sm = 0
for ind in range(1,n+1):
    sm = sm + (ind * numb[ind-1])
def find_sum(i):
    global sm
    if(i==0):
        return sm
    else:
        sm = sm - total
        sm = sm + numb[i-1]*n
        return(sm)
print(max(map(find_sum,range(0,n))))
