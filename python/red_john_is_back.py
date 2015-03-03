import sys
def main():
    numinputs = int(input())
    dp = [1,1,1,1]
    inputs = [int(val) for val in sys.stdin]
    for i in range(4,41):
        dp.append(dp[i-1]+dp[i-4])
    n = max(dp)
    primes = find_primes(n+1)
    primes = count_primes(primes,n+1)
    for x in inputs:
        print(primes[dp[x]])


def find_primes(n):
    primes = [val for val in range(2,n+1)]
    primes = [0,0]+primes
    i = 2
    while i*i<=n:
        for j in range(2*i,n+1,i):
            primes[j] = 0
        for temp in range(i+1,n+1):
            if primes[temp]!=0:
                i=temp
                break
    return primes
def count_primes(primes,n):
    count = 0
    for i in range(n+1):
        if primes[i]!=0:
            count += 1
        primes[i] = count
    return primes
if __name__=='__main__':
    main()
