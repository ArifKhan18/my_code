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
const ll mXs = 1000000;
vector<ll> primelist;

void precal()
{
    bool vis[1000000];
    memset(vis, false, sizeof(vis));
    for (ll i = 4; i <= 1000000; i += 2)
    {
        vis[i] = true;
    }
    for (ll i = 3; i * i < mXs; i += 2)
    {
        if (vis[i] == false)
        {
            for (ll j = i + i; j < mXs; j += i)
            {
                vis[j] = true;
            }
        }
    }
    for (ll i = 2; i < mXs; i++)
    {
        if (vis[i] == false)
        {
            primelist.push_back(i);
        }
    }
}
void solve()
{
    // cout << primelist[primelist.size() - 1] << nn;
    ll n;
    cin >> n;
    ll apos = lower_bound(primelist.begin(), primelist.end(), n + 1) - primelist.begin();
    ll a = primelist[apos];
    ll bpos = lower_bound(primelist.begin(), primelist.end(), a + n) - primelist.begin();
    ll b = primelist[bpos];
    // cout << a << " " << b << nn;
    cout << a * b << nn;
}
int main()
{
    code();
    precal();
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}