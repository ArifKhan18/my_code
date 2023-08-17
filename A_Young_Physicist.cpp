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
    ll q, a = 0, b = 0, c = 0;
    ll x[110], y[110], z[110];
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (ll i = 0; i < q; i++)
    {
        a += x[i];
        b += y[i];
        c += z[i];
    }
    if (a == 0 and b == 0 and c == 0)
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
    // ll test;
    // cin >> test;
    // while (test--)
    // {
    solve();
    // }
    return 0;
}