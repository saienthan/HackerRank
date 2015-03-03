#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void lcs(int n,int m,vector<int> a,vector<int> b,int **c)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
            if(i==0 || j==0)
                c[i][j] = 0;
            else
            {
                if(a[i-1] == b[j-1])
                    c[i][j] = c[i-1][j-1]+1;
                else
                    c[i][j] = max(c[i][j-1],c[i-1][j]);
            }
    }
}

stack<int> trace(int n,int m,vector<int> a,vector<int> b,int **c)
{
    int length = c[n][m];
    int i=n;int j=m;
    stack<int> final;
    while(length>0)
    {
        if(a[i-1]==b[j-1])
        {
            final.push(a[i-1]);
            i = i-1;
            j = j-1;
            length = length-1;
        }
        else if(c[i-1][j]==length)
            i = i-1;
        else if(c[i][j-1]==length)
            j = j-1;
    }
    return final;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<m;++i)
        cin>>b[i];
    int **c = new int*[n+1];
    for(int i=0;i<n+1;++i)
        c[i] = new int[m+1];
    lcs(n,m,a,b,c);
    stack<int> st= trace(n,m,a,b,c);
    while(!st.empty())
    {
       cout << st.top() << ' ';
       st.pop();
    } 
    cout << endl;
    return 0;
}
