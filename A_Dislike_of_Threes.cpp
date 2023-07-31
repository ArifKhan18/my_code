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
    for (ll i = 1; i <= 1666; i++)
    {
        if (i % 3 == 0 or i % 10 == 3)
        {
            continue;
        }
        else
        {
            x--;
            if (x == 0)
            {
                cout << i << nn;
                break;
            }
        }
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
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<=1666; i++)
        {
            if(n%3==0 || n%10==3)
            {
                continue;
            }
            else
            {
                n--;
                if(n==0)
                {
                    cout<<i<<endl;
                    break;
                }

            }
        }
    }
}
