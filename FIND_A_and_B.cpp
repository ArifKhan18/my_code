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
    ll a[3], c = 0, m = 0;
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    c = a[0] * a[1];
    ll c1 = a[0] * a[2];
    ll c2 = a[1] * a[2];
    if (c % a[2] == 0)
    {
        cout << c << sp << a[2] << nn;
    }
    else if (c1 % a[1] == 0)
    {
        cout << c1 << sp << a[1] << nn;
    }
    else if (c2 % a[0] == 0)
    {
        cout << c2 << sp << a[0] << nn;
    }

    else
    {
        cout << "-1" << nn;
    }
    // for (ll i = 0; i < 3; i++)
    // {
    //     if (a[i] % 2 != 0)
    //     {
    //         c++;
    //     }
    // }
    // if (c > 1)
    // {
    //     cout << "-1" << nn;
    // }
    // else if (c == 0)
    // {
    //     cout << a[0] * a[2] << sp << a[1] << nn;
    // }
    // else if (c == 1)
    // {
    //     for (ll i = 0; i < 3; i++)
    //     {
    //         if (a[i] % 2 != 0)
    //         {
    //             m = a[i];
    //         }
    //     }
    //     if (a[0] != m)
    //     {
    //         cout << a[1] * a[2] << sp << a[0] << nn;
    //     }
    //     else if (a[1] != m)
    //     {
    //         cout << a[0] * a[2] << sp << a[1] << nn;
    //     }
    //     else if (a[2] != m)
    //     {
    //         cout << a[0] * a[1] << sp << a[2] << nn;
    //     }
    // }
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