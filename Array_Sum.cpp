/*
**  Bismillahir Rahmanir Rahim
**  Author: MD. ARIF yHAN
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
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << "-1" << nn;
        return;
    }

    vector<ll> A(x, 1);
    for (ll i = 1; i < x; i++)
    {
        if ()
            break;
        A[i] += 1;
        y -= 2;
    }
    for (ll i = 0; i < x; i++)
    {
        cout << A[i] << sp;
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