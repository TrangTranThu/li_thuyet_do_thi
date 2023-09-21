#include<bits/stdc++.h>
using namespace std;

vector<int> dsk[100];

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for(auto x: dsk[i])
            cout << x << " ";
        cout << endl;
    }
}