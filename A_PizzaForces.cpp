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
    ll x, s, m, b;
    cin >> x;
    if (x % 2 != 0)
    {
        x = x + 1;
    }
    if (x % 6 == 0)
    {
        s = x / 6;
        cout << s * 15 << nn;
        // return;
    }
    else if (x % 8 == 0)
    {
        m = x / 8;
        cout << m * 20 << nn;
        // return;
    }
    else if (x % 10 == 0)
    {
        b = x / 10;
        cout << b * 25 << nn;
        // return;
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