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
    ll x;
    cin >> x;
    string s;
    cin >> s;
    set<char> o;
    for (ll i = 0; i < s.size(); i++)
    {
        // if (isupper(s[i]))
        // {
        //     tolower(s[i]);
        // }
        s[i] = toupper(s[i]);
        o.insert(s[i]);
    }
    // for (auto u : o)
    // {
    //     cout << u << sp;
    // }
    // cout << nn;
    ll q = o.size();
    // cout << q << nn;
    if (q == 26)
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
    // ll test;
    // cin >> test;
    // while (test--)
    // {
    solve();
    //}
    return 0;
}