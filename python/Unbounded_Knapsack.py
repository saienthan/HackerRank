numinputs = int(input())
for dummy in range(numinputs):
    [n,k] = [int(val) for val in input().split()]
    vals = [int(val) for val in input().split()]
    vals = sorted(vals)
    dp = [0]*2001
    for i in range(1,k+1):
        for val in vals:
            if val>i:
                continue
            dp[i] = max(dp[i],val+dp[i-val])
    print(dp[k])
