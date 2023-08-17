/*
**  Bismillahir Rahmanir Rahim
**  Author: MD. ARIF KHAN
**  Bangladesh University of Business and Technology,(BUBT)
**  Department of Computer Science And Engineering
*/
#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define yes cout << "Yes\n";
#define no cout << "No\n";
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
    ll a, b, sum1 = 0, sum2 = 0;
    cin >> a >> b;
    ll x[a];
    ll y[b];
    for (ll i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < b; i++)
    {
        cin >> y[i];
    }
    sort(x, x + a);
    sort(y, y + b);
    for (ll i = 0; i < a; i++)
    {
        sum1 += x[i];
    }
    for (ll i = 0; i < b; i++)
    {
        sum2 += y[i];
    }
    if (sum1 == sum2)
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
    //}
    return 0;
}