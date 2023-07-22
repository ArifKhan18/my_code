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
    ll x;
    cin >> x;
    vector<ll> y(x);

    for (ll i = 0; i < x; i++)
    {
        cin >> y[i];
    }

    unordered_map<ll, ll> mp;
    for (int i = 0; i < x; i++)
    {
        mp[y[i]]++;
    }

    // Remove elements with a frequency of 2
    for (auto it = mp.begin(); it != mp.end();)
    {
        if (it->second == 2)
        {
            it = mp.erase(it);
        }
        else
        {
            ++it;
        }
    }

    // Calculate the size of the resulting array
    ll array_size = 0;
    for (auto &entry : mp)
    {
        array_size += entry.second;
    }

    // Print the array size or array size divided by 2
    if (array_size == 0)
    {
        cout << x / 2 << nn;
    }
    else
    {
        cout << array_size << nn;
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
