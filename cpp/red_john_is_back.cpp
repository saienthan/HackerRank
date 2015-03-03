#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int* find_primes(int n)
{
    int *primes = new int[n];
    memset(primes,0,sizeof(primes));
    for(int i=2;i<n+1;i++)
        primes[i] = i;
    int i = 2;
    while(i*i<=n)
    {
        for(int j=2*i;j<n+1;j=j+i)
            primes[j] = 0;
        for(int temp=i+1;temp<n+1;++temp)
        {
            if(primes[temp]!=0)
            {
                i=temp;
                break;
            }
        }
    }
    return primes;
}

int* count_primes(int* primes,int n)
{
    int count=0;
    for(int i=0;i<n+1;++i)
    {
        if(primes[i]!=0)
            count += 1;
        primes[i] = count;
    }
    return primes;
}


int main()
{
    int numinputs;
    cin >> numinputs;
    int *inputs = new int[numinputs];
    for(int i=0;i<numinputs;++i)
       cin >> inputs[i]; 
    int dp[41] = {1,1,1,1};
    for(int i=4;i<41;++i)
        dp[i] = dp[i-1]+dp[i-4];
    int n = *max_element(dp,dp+41);
    int *primes = find_primes(n+1);
    primes = count_primes(primes,n+1);
    for(int i=0;i<numinputs;++i)
        cout << primes[dp[inputs[i]]] << endl;
    return 0;
}

