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
    ll x;
    cin >> x;
    ll y[x], z[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
        z[i] = y[i];
    }
    sort(z, z + x);
    bool f = 1;
    for (ll i = 0; i < x; i++)
    {
        if (y[i] % 2 != z[i] % 2)
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
    {
        no
    }
    else
    {
        yes
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