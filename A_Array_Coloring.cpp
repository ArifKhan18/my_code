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
    ll sum1 = 0;
    ll sum2 = 0;
    cin >> x;
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    for (ll i = 0; i < x; i++)
    {
        if (y[i] % 2 == 0)
        {
            sum1 += y[i];
        }
        else if (y[i] % 2 != 0)
        {
            sum2 += y[i];
        }
    }
    if (sum1 % 2 == 0 and sum2 % 2 == 0 or sum1 % 2 != 0 and sum2 % 2 != 0)
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