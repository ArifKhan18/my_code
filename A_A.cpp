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
    string arr[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    ll a, b, c;
    string s;
    int arr2[5] = {0};
    cin >> a >> b >> c >> s;
    for (int i = 0; i < 5; i++)
    {
        if (s == arr[i])
        {
            arr2[i]++;
        }
    }
    ll x, y, z;
    cin >> x >> y >> z;
    ll day1 = a * 360;
    ll day2 = b * 30;
    ll day3 = c;
    ll total1 = (day1 + day2 + day3);
    ll day4 = x * 360;
    ll day5 = y * 30;
    ll day6 = z;
    ll total2 = (day4 + day5 + day6);
    ll diff = abs(total1 - total2);
    ll rem = diff % 5;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i];
    }
    cout << rem << arr[rem] << nn;
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