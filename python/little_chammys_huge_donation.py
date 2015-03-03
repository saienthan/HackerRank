import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[numinputs,*nums] = lines
def sqsum(n):
    return int(n*(n+1)*((2*n)+1)/6)
for n in nums:
    l = 1
    u = 10000000000000000
    while True:
        m = (l+u)//2
        sumuptom = sqsum(m)
        if sumuptom == n[0]:
            print(m)
            break
        if sumuptom>n[0] and sqsum(m-1)<=n[0]:
            print(m-1)
            break
        elif l>u:
            break
        if sumuptom>n[0]:
            u = m-1
        elif sumuptom<n[0]:
            l = m+1
