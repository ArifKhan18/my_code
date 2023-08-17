/*
**  Bismillahir Rahmanir Rahim
**  Author: MD. ARIF KHAN
**  Bangladesh University of Business and Technology,(BUBT)
**  Department of Computer Science And Engineering
*/
#include <iostream>
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
    ll y[x];
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    ll ma = y[0];
    ll in;
    for (ll i = 0; i < x; i++)
    {
        if (y[i] > ma)
        {
            ma = y[i];
            in = i;
        }
    }
    for (ll i = 0; i < x; i++)
    {
        if (y[in] - y[in - 1] < 0)
        {
            cout << "1" << nn;
            return;
        }
        else if (y[i] == y[i + 1])
        {
            cout << "1" << nn;
            return;
        }

        else if (y[in] > y[in - 1])
        {
            cout << (y[in] - y[in - 1]) + 1 << nn;
            return;
        }
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
    // }
    return 0;
}