#include <iostream>
#include <vector>
#define ll long long 
ll int modular_pow(ll int base,ll int exponent,int modulus)
{
    ll result = 1;
    while (exponent > 0)
    {   
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }   
    return result;
}

int main()
{
    using namespace std;
    string num;
    cin >> num;
    long long int size = num.length();
    long long int ans = 0;
    long long int pow11 = 0;
    long long int pow2 = 0;
    for(long long int i=0;i<size;++i)
    {
        pow11 = modular_pow(11,size-i-1,1000000007);
        pow2 = modular_pow(2,i,1000000007);
        ans = (ans + ((num[i]-'0')*pow11*pow2)%1000000007)%1000000007;
    }
    cout << ans << endl;
    return 0;
}
