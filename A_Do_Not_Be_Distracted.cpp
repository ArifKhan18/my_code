/*
**                Bismillahir Rahmanir Rahim
**
**
**     Author: MD. ARIF KHAN
**     Bangladesh University of Business and Technology,(BUBT)
**     Department of Computer Science And Engineering
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
    ll x, a;
    cin >> x;
    string y;
    cin >> y;
    set<char> s;
    s.insert(y[0]);

        for (ll i = 1; i < y.size(); i++)
    {
        if (y[i] == y[i - 1])
        {
            continue;
        }
        else
        {
            if (s.count(y[i]))
            {
                cout << "NO" << nn;
                break;
            }
            else
            {
                s.insert(y[i]);
            }
        }
    }
    cout << "YES" << nn;
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