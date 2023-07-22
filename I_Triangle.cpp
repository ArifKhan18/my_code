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
    ll a[3];
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    ll x[3];
    for (ll i = 0; i < 3; i++)
    {
        cin >> x[i];
    }
    sort(a, a + 3);
    sort(x, x + 3);
    if (a[0] == x[0] && a[1] == x[1] && a[2] == x[2])
    {
        if (((a[0] * a[0]) + (a[1] * a[1])) == (a[2] * a[2]) && ((x[0] * x[0]) + (x[1] * x[1])) == (x[2] * x[2]))
        {
            yes
        }
        else
        {
            no
        }
    }
    else
    {
        no
    }
}
int main()
{
    code();
    // ll test;
    // cin >> test;
    // while (test--)
    // {
    solve();
    // }
    return 0;
}