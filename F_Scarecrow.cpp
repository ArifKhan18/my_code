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
    ll arr, qu;
    cin >> arr >> qu;
    ll ele[arr + 1];
    ll que[qu + 1];
    vector<ll> v;
    for (ll i = 0; i < arr; i++)
    {
        cin >> ele[i];
        // cout << ele[i] << sp;
    }
    for (ll i = 0; i < qu; i++)
    {
        cin >> que[i];
        // cout << que[i] << sp;
    }
    ll newe = ele[0];
    // cout << arrmin << nn;
    for (ll i = 0; i < arr; i++)
    {
        newe = min(newe, ele[i]);
        ele[i] = newe;
        v.push_back(newe);
        // cout << v[i] << nn;
    }
    for (ll i = 0; i < qu; i++)
    {
        cout << v[que[i] - 1] << nn;
    }
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