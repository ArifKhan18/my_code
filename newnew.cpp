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
    ll x, y, temp, temp2, temp3, temp4;
    // string a;
    cin >> x >> y;
    ll q = 0;
    ll w = 0;
    q = x;
    w = y;
    if (x < 23 and y <= 49)
    {
        cout << (q + 1) << (w + 10) << nn;
    }
    // if (y <= 49)
    // {
    //     temp2 = y + 10;
    // }
    else
    {
        // temp = 00;
        cout << "00"
             << "00" << nn;
    }
    // if (y > 49)
    // {
    //     temp2 = 00;
    // }
    // cout << temp << a << temp2 << nn;
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