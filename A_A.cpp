/*
**  Bismillahir Rahmanir Rahim
**  Author: MD. ARIF KHAN
**  Bangladesh University of Business and Technology,(BUBT)
**  Department of Computer Science And Engineering
*/
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
    ll x, y, c = 0;
    cin >> x >> y;
    ll a[y];
    for (ll i = 0; i < y; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < y; i++)
    {
        if (a[i] + 2 != a[i + 1] - 1 and a[i] + 2 <= x or a[i] + 2 != a[i + 1] + 1 and a[i] + 2 <= x)
        {
            c++;
        }
    }
    cout << c << nn;
}
int main()
{
    code();
    // ll test;
    // cin >> test;
    // while (test--)
    // {
    solve();
    //}
    return 0;
}