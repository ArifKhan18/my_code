#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "0" << endl;
        return;
    }
    else
    {
        cout << (n - 1) / 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}