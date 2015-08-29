n, m = list(map(int, input().split()))
cs = list(map(int, input().split()))
dp = [0] * (n+1)
dp[0] = 1
for c in cs:
    for i in range(c, len(dp)):
        dp[i] += dp[i - c]
print(dp[n])
