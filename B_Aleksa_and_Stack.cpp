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
    int x;
    cin >> x;
    ll a = x;
    int added = 4;
    vector<int> y;
    for (int i = 0; i < a; i++)
    {
        x += added;
        y.push_back(x - 2);
    }
    for (auto num : y)
    {
        cout << num << sp;
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
