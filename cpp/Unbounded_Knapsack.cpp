#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int numinputs;
    cin >> numinputs;
    vector<int> vals;
    int dp[2001];
    for(int tc=0;tc<numinputs;tc++)
    {
        vals.clear();
        memset(dp,0,sizeof(dp));
        int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
            int val;
            cin >> val;
            vals.push_back(val);
        }
        sort(vals.begin(),vals.end());
        for(int i=1;i<=k;i++)
        {
            for(int j=0;j<vals.size();j++)
            {
                if(vals[j]>i)
                    continue;
                dp[i] = max(dp[i],vals[j]+dp[i-vals[j]]);
            }
        }
        cout << dp[k] << endl;
    }
    return 0;
}
