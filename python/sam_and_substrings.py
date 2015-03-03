num = input()
size = len(num)
dp = [0]*size
dp[0] = int(num[0])
ans = dp[0]
for i in range(1,size):
    dp[i] = (dp[i-1]*10 + (int(num[i])*(i+1)))%1000000007
    ans = (ans + dp[i])%1000000007
print(ans)


