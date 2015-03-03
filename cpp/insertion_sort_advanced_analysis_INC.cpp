#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    int n,j,key,count,t,i;
    cin >> t;
    for(int numinputs=0;numinputs<t;++numinputs)
    {
        cin >> n;
        vector<int> a(n);
        count = 0;
        for(i=0;i<n;++i)
            cin >> a[i];
        for(i=1;i<n;++i)
        {
            j=i-1;
            key = a[i];
            while(j>=0 && a[j]>key)
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;
            count += i - (j+1);
        }
        cout << count << endl;
    }
}
