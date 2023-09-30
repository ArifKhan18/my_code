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
    ll x, c = 0;
    cin >> x;
    ll temp = x;
    while (temp != 0)
    {
        temp /= 10;
        c++;
    }
    if (c == 4)
    {
        cout << x << nn;
    }
    else if (c == 3)
    {
        cout << "0" << x << nn;
    }
    else if (c == 2)
    {
        cout << "00" << x << nn;
    }
    else if (c == 1)
    {
        cout << "000" << x << nn;
    }
    else if (c == 0)
    {
        cout << "0000" << nn;
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