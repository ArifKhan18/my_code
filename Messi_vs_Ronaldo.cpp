/*********************************************************************
**                Bismillahir Rahmanir Rahim                        **
**                                                                  **
**                                                                  **
**     Author: MD. ARIF KHAN                                        **
**     Bangladesh University of Business and Technology,(BUBT)      **
**     Department of Computer Science And Engineering               **
*********************************************************************/
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll messi = a * 2;
    ll ronal = c * 2;
    ll m = messi + b;
    ll r = ronal + d;
    if (m == r)
    {
        cout << "Equal" << nn;
    }
    else if (m > r)
    {
        cout << "Messi" << nn;
    }
    else if (m < r)

    {
        cout << "Ronaldo" << nn;
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