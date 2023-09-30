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
    // ll x;
    // cin >> x;

    vector<char> v;
    // for (ll i = 0; i < x; i++)
    // {
    string y;
    cin >> y;

    for (ll i = 0; i < y.size(); i++)
    {
        if (y[i] == '1' or y[i] == '3')
        {
            v.push_back(y[i]);
        }
    }
    //}
    for (auto c : v)
    {
        cout << c;
    }
    cout << nn;
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
