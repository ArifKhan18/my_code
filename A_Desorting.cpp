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
    ll y[x];
    ll ans = 0;
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (ll i = 0; i < x; i++)
    {
        ans = y[x - 1] - y[x - 2];
    }
    // if (ans == 0)
    // {
    //     cout << "1" << nn;
    // }
    // else if (ans < 0)
    // {
    //     cout << "0" << nn;
    // }
    // else
    // {
    cout << abs(ceil((double)(ans + 1) / 2)) << nn;
    // }
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