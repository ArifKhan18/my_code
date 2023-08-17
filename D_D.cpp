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
    string a, b;
    cin >> a >> b;
    ll x = a.size();
    ll y = b.size();
    string c = a;
    string d = b;
    asort(c);
    asort(d);
    if (x > y)
    {
        for (ll i = 0; i < d.size(); i++)
        {
            if (c[i] != d[i])
            {
                if (c[i + 1] == d[i])
                {
                    cout << "both" << nn;
                    return;
                }
                // cout << a << nn;
                // return;
            }
            else if (c[i] == d[i])
            {
                cout << "automaton" << nn;
                return;
            }
        }
    }
    else if (x < y)
    {
        for (ll i = 0; i < d.size(); i++)
        {
            if (d[i] != c[i])
            {
                if (d[i + 1] == c[i])
                {
                    cout << "need tree" << nn;
                    return;
                }
            }
            else if (d[i] == c[i])
            {
                cout << "automaton" << nn;
                return;
            }
        }
    }
    else if (x == y)
    {
        for (ll i = 0; i < c.size(); i++)
        {
            if (c[i] != d[i])
            {
                cout << "need tree" << nn;
                return;
            }
            else if (c[i] == d[i])
            {
                cout << "array" << nn;
                return;
            }
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