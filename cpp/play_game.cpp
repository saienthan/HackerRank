#include <vector>
#include <iostream>
#include <string.h>
long long int max(long long int a,long long int b,long long int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}
int main()
{
    using namespace std;
    int numtestcases;
    cin >> numtestcases;
    for(int dummy=0;dummy<numtestcases;++dummy)
    {
        int n;
        cin >> n;
        vector<long long int> scores(n);
        vector<long long int> sum(n);
        vector<long long int> dp(n);
        for(int i=0;i<n;i++)
        {
            int val;
            cin >> val;
            scores[i] = val;
        }
        sum[n-1] = scores[n-1];
        sum[n-2] = scores[n-1]+scores[n-2];
        sum[n-3] = scores[n-1]+scores[n-2]+scores[n-3];
        dp[n-1] = sum[n-1];
        dp[n-2] = sum[n-2];
        dp[n-3] = sum[n-3];
        for(int i = n-4; i>-1 ; --i)
        {
            sum[i] = sum[i+1] + scores[i];
            dp[i] = max(sum[i+1]-dp[i+1]+scores[i],sum[i+2]-dp[i+2]+scores[i]+scores[i+1],sum[i+3]-dp[i+3]+scores[i]+scores[i+1]+scores[i+2]);
        }
        cout << dp[0] << endl;
    }
}

