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
    ll x, c = 1, mx = 1;
    cin >> x;
    vector<ll> v(x);
    vector<ll> cou;
    for (ll i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < x - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            c++;
            ////////////cou.push_back(c);
        }
        else
        {
            mx = max(mx, c);
            c = 1;
        }
    }
    mx = max(mx, c);

    cout << mx << nn;
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