import math
numinputs = int(input())
def findr(n):
    if n in r:
        return r[n]
    r[n] = (pow(2,math.ceil(n/4)) * findr(math.ceil(n/5)) * findr(math.ceil(n/10)))%1000000000
    return r[n]
r = dict()
r[0] = r[1] = r[2] = 1
r[3] = r[4] = 3
r[5] = r[6] = 15
r[7] = r[8] = r[9] = r[10] = 105
for dumm in range(numinputs):
    n = int(input())
    rval = findr(n)
    ls = [rval*i for i in range(1,6)]
    maxval = 0
    for val in ls:
        for inner in ls:
            if val==inner:
                continue
            temp = pow(val,inner,1000000000)
            if maxval < temp:
                maxval = temp
    print(maxval)
