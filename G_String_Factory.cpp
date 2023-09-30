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
    string s;
    cin >> s;
    ll val, i;
    ll val1, val2;
    ll ans = 0;
    vector<ll> v;

    for (i = 0; i < s.size() - 1; i++)
    {
        val1 = s[i];
        val2 = s[i + 1];

        ans += abs(val1 - val2) * 2;
    }

    cout << ans % 1000000007 << endl;

    // for (i = 0; i < s.size(); i++)
    // {
    //     cout << val1 << " " << val2 << endl;
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