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
#define testcase cout << "Case " << i << ": ";
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
    ll ans = 0;
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (ll i = 0; i < x - 1; i++)
    {
        ans = max(ans, y[i] * y[i + 1]);
    }
    cout << ans << nn;
}
int main()
{
    code();
    ll test;
    cin >> test;
    for (ll i = 1; i <= test; i++)
    {
        testcase;
        solve();
    }
    return 0;
}