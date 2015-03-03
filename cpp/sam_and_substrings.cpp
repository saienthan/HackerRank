#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    string num;
    cin >> num;
    int size = num.length();
    vector<long long int> dp(size);
    dp[0] = num[0] - '0';
    long long int ans = dp[0];
    for(int i=1;i<size;++i)
    {
        dp[i] = ((dp[i-1]*10 + ((num[i] - '0') * (i+1))) % 1000000007);
        ans = (ans + dp[i])%1000000007;
    }
    cout << ans << endl;
}
