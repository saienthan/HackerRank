#include<iostream>
int main()
{
    int a,b,n;
    using namespace std;
    cin >> a >> b >> n;
    long long int* vals = new long long int[n+1];
    vals[0] = a; vals[1] = b;
    for(int i=2;i<n+1;++i)
        vals[i] = (vals[i-1]*vals[i-1]) + vals[i-2];
    cout << vals[n-1] << endl;
}
