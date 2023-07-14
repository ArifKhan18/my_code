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
    ll n;
    cin >> n;
    ll a[n];
    // set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        // s.insert(a[i]);
    }
    // sort(a, a + n);
    ll mx = 0;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (a[i] > a[j] or a[i] < a[j])
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
            {
                cnt = 0;
            }
        }
    }
    cout << mx;
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