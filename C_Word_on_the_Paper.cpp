/*********************************************************************
**                Bismillahir Rahmanir Rahim                        **
**                                                                  **
**                                                                  **
**     Author: MD. ARIF KHAN                                        **
**     Bangladesh University of Business and Technology,(BUBT)      **
**     Department of Computer Science And Engineering               **
*********************************************************************/
#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define sp " "
#define asort(a) sort(a.begin(), a.end())
#define point(a) fixed << setprecision(a)
#define pi 3.1415926535897932384626433832795
#define code()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
void solve()
{
    char grid[8][8];
    string s;
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 8; j++)
        {
            if (grid[i][j] >= 'a' && grid[i][j] <= 'z' or grid[i][j] >= 'A' && grid[i][j] <= 'Z')
            {
                s += grid[i][j];
            }
        }
    }
    cout << s << nn;
}
int main()
{
    code();
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}