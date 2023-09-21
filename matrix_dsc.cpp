#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == 1 && i < j)
                cout << i << " " << j << endl;
        }
    }
}