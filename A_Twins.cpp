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
    ll x, sum1 = 0, sum2 = 0, c = 0;
    cin >> x;
    vector<ll> v;
    for (ll i = 0; i < x; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
        sum1 += v[i];
    }
    sort(v.begin(), v.end(), greater<ll>());
    for (ll i = 0; i < x; i++)
    {
        sum2 += v[i];
        c++;
        if (sum2 > sum1 / 2)
        {
            break;
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