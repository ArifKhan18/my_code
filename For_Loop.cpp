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
    ll x, y;
    cin >> x >> y;
    for (ll i = x; i <= y; i++)
    {
        if (i == 1)
            cout << "one" << nn;
        else if (i == 2)
            cout << "two" << nn;
        else if (i == 3)
            cout << "three" << nn;
        else if (i == 4)
            cout << "four" << nn;
        else if (i == 5)
            cout << "five" << nn;
        else if (i == 6)
            cout << "six" << nn;
        else if (i == 7)
            cout << "seven" << nn;
        else if (i == 8)
            cout << "eight" << nn;
        else if (i == 9)
            cout << "nine" << nn;
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << nn;
            }
            else
            {
                cout << "odd" << nn;
            }
        }
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