/*
**  Bismillahir Rahmanir Rahim
**  Author: MD. ARIF KHAN
**  Bangladesh University of Business and Technology,(BUBT)
**  Department of Computer Science And Engineering
*/
#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define yes cout << "Yes\n";
#define no cout << "No\n";
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
    string q, e;
    q = s;
    reverse(q.begin(), q.end());
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == q[i])
        {
            yes return;
        }
        else
        {
            s = "a" + s + "a";
            e = s;
            reverse(e.begin(), e.end());
            if (s[i] == e[i])
            {
                yes return;
            }
            else
            {
                s = "aa" + s + "aa";
                e = s;
                reverse(e.begin(), e.end());
                if (s[i] == e[i])
                {
                    yes return;
                }
                else
                {
                    s = "aaa" + s + "aaa";
                    e = s;
                    reverse(e.begin(), e.end());
                    if (s[i] == e[i])
                    {
                        yes return;
                    }
                    else
                    {
                        s = "aaaa" + s + "aaaa";
                        e = s;
                        reverse(e.begin(), e.end());
                        if (s[i] == e[i])
                        {
                            yes return;
                        }
                        else
                        {
                            // s = "aaaaa" + s + "aaaaa";
                            // e = s;
                            // reverse(e.begin(), e.end());
                            // if (s[i] == e[i])
                            // {
                            //     yes return;
                            // }
                            // else
                            // {
                            no return;
                            //}
                        }
                    }
                }
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