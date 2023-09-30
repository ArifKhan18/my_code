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
    ll n, sum1 = 0, sum2 = 0, min1 = INT_MAX, min2 = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum1 += x;
        min1 = min(min1, x);
    }

    for (int i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        sum2 += y;

        min2 = min(min2, y);
    }
    ll a = sum1 + (n * min2);
    ll b = sum2 + (n * min1);

    cout << min(a, b) << endl;
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