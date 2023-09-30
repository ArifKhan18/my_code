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
    string a, b;
    cin >> a >> b;
    vector<char> v;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' and b[i] == '0' or a[i] == '1' and b[i] == '1')
        {
            v.push_back('0');
        }
        else
        {
            v.push_back('1');
        }
    }
    for (auto u : v)
    {
        cout << u;
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