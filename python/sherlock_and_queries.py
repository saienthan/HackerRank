import sys
def main():
    lines = [[int(x) for x in line.split()] for line in sys.stdin]
    [n,m],A,B,C = lines
    for stepsizeindex in range(m):
        stepsize = B[stepsizeindex]
        for i in range(stepsize-1,n,stepsize):
            A[i] = (A[i]*C[stepsizeindex])%1000000007
    print(' '.join(map(str, A)))
if __name__=="__main__":
    main()
