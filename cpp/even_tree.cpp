#include<iostream>
#include<vector>
using namespace std;
int tot;
void disp(int n,vector<vector<int> >&a)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
int dfs(vector<bool> &reach,int node,vector<vector<int> >&a)
{
    int num = 0;
    reach[node] = true;
    for(int i=1;i<reach.size();i++)
    {
        if(!reach[i] && a[node][i])
        {
            int num_nodes = dfs(reach,i,a);
            if(num_nodes%2==0)
                tot++;
            else
                num += num_nodes;
        }
    }
    return num + 1;
}
int main()
{
    tot = 0;
    int n,m,i,j;
    cin >> n >> m;
    vector<vector<int> > a(n+1,vector<int>(n+1));
    vector<bool> reach(n+1);
    fill(reach.begin(),reach.end(),false);
    for(int e=0;e<m;e++)
    {
        cin >> i >> j;
        a[i][j] = 1;
        a[j][i] = 1;
    }
    dfs(reach,1,a);
    cout << tot << endl;
}
