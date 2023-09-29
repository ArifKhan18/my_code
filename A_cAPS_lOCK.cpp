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
    string s;
    cin >> s;
    bool flag = true;

    if (islower(s[0]))
    {
        for (int i = 1; i < s.size(); i++)
        { // 1st condition
            if (islower(s[i]))
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    { // 2nd condition
        for (int i = 1; i < s.size(); i++)
        {
            if (islower(s[i]))
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == false)
        cout << s << endl;
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
                cout << (char)toupper(s[i]);
            else
                cout << (char)tolower(s[i]);
        }
        cout << endl;
    }
}
int main()
{
    code();
    ll test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}