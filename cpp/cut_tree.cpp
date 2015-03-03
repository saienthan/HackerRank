#include <vector>
#include <iostream>
int main()
{
    using namespace std;
    int n,k;
    cin >> n >> k;
    int **tree = new int*[n+1];
    for(int i=1;i<=n;i++)
        tree[i] = new int[n+1];
    vector<int> edge_count(n+1);
    for(int i=1;i<n;++i)
    {
        int s_edge,e_edge; cin >> s_edge >> e_edge;
        tree[i][j] = 1; tree[j][i] = 1;
        edge_count[s_edge]++; edge_count[e_edge]++;
    }
    for(int i=1;i<=n;++i)
        cout << edge_count[i] << ' ';
    cout << endl;
}
