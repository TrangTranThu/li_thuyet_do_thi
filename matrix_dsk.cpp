#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
vector<int> dsk[100];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                dsk[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for(auto x : dsk[i])
        {
            cout << x << " ";
        } 
        cout << endl;
    }
}