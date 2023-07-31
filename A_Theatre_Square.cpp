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
#define code()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
void solve()
{
    ll m, n, a;
    cin >> m >> n >> a;
    double x = ceil(1.0 * m / a);
    double y = ceil(1.0 * n / a);
    ll result = x * y;
    cout << result << nn;
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