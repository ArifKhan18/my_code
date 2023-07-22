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
    ll m, n, k;
    bool f = 0;
    cin >> m >> n >> k;
    ll x, y, ma = 0;
    cin >> x >> y;
    ll fr[k][2];
    for (ll i = 0; i < k; i++)
    {
        cin >> fr[i][0] >> fr[i][1];
        if (abs((x - fr[i][0]) - (y - fr[i][1])) == 1)
        {
            f = 1;
        }
    }
    if (f == 1)
    {
        yes
    }
    else
    {
        no
    }
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