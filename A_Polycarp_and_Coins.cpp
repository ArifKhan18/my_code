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
#define yes "YES"
#define no "NO"
#define sp " "
#define code()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
void solve()
{
    ll x, y, z;
    cin >> x;
    y = x / 3;
    z = y;
    if (x % 3 == 1)
    {
        y += 1;
    }

    else if (x % 3 == 2)
    {
        z += 1;
    }
    cout << y << sp << z << nn;
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