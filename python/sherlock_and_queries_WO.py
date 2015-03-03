import sys
def main():
    lines = [[int(x) for x in line.split()] for line in sys.stdin]
    [n,m],A,B,C = lines
    factors = dict()
    for i in range(m):
        try:
            factors[B[i]] = factors[B[i]] * C[i] % 1000000007
        except:
            factors[B[i]] = 1 * C[i] % 1000000007
    for stepsize,factor in factors.items():
        for ind in range(stepsize-1,n,stepsize):
            A[ind] = (A[ind]*factor)%1000000007
    print(' '.join(map(str, A)))
if __name__=="__main__":
    main()
