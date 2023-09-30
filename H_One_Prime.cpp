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
    cin >> x;
    ll c = 0;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            c++;
            break;
        }
    }

    if (c == 0 && x > 1)
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
    solve();
    return 0;
}
