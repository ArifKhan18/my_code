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
    ll x, one = 0, two = 0, three = 0, four = 0, com = 0, com2 = 0;
    cin >> x;
    vector<ll> y(x);
    // vector<ll> one;
    // vector<ll> two;
    // vector<ll> three;
    // vector<ll> four;
    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }
    asort(y);
    for (ll i = 0; i < x; i++)
    {
        if (y[i] == 1)
        {
            one++;
        }
        else if (y[i] == 2)
        {
            two++;
        }
        else if (y[i] == 3)
        {
            three++;
        }
        else if (y[i] == 4)
        {
            four++;
        }
    }
    cout << one << sp << two << sp << three << sp << four << nn;
    if(three==one)
    {
        com=((three+one)/2);
    }
    else if(three>one)
    {
        com2=
    }
    // if (three == one)
    // {
    //     com = (three + one) / 2;
    // }
    // else if (two > 0)
    // {
    //     com2 = two / 2;
    // }
    // cout << four + com + com2 << nn;
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