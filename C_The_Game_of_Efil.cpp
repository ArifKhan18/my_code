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
    ll a, b, d = 0;
    cin >> a >> b;
    d++;
    ll c;
    cin >> c;
    for (ll i = 0; i < c; i++)
    {
        ll x, y;
        cin >> x >> y;
    }
    ll u = a * b;
    if (u > c)
    {
        ll q = u - c;

        cout << "case " << d << ": " << u - c << sp << "possible ancestors." << nn;
    }
    else
    {
        cout << "case " << d << ": "
             << "Garden of Eden." << nn;
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