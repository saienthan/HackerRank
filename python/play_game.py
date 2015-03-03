numinputs = int(input())
for dummy in range(numinputs):
    n = int(input())
    scores = [int(val) for val in input().split()]
    dp = [0]*n
    sumdp = [0]*n
    dp[n-1] = scores[n-1]
    sumdp[n-1] = scores[n-1]
    dp[n-2] = scores[n-2]+scores[n-1]
    sumdp[n-2] = scores[n-2]+scores[n-1]
    dp[n-3] = scores[n-3]+scores[n-2]+scores[n-1]
    sumdp[n-3] = scores[n-2]+scores[n-1]+scores[n-3]
    for i in range(n-4,-1,-1):
        sumdp[i] = sumdp[i+1] + scores[i]
        dp[i] = max(sumdp[i+1]-dp[i+1]+scores[i],sumdp[i+2]-dp[i+2]+scores[i]+scores[i+1],sumdp[i+3]-dp[i+3]+scores[i]+scores[i+1]+scores[i+2])
    print(dp[0])
