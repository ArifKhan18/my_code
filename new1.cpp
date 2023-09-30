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
    ll x,y;
    char a;
    cin>>x>>a>>y;
    ll h1=x%10;
    ll h2=x/10;
    ll m1=y%10;
    ll m2=y/10;
    if(h1==m1 or h1== m2 and h2==m1 or h2==m2)
    {
        ll hma= max(h1,h2);
        ll mma = max(m1,m2);
        ll hme= min(h1,h2);
        ll mme = min(m1,m2);
        if(hma==h1 and mma==m1)
        {
            cout<<hma+1<<h2<<a<<mma+1<<m2<<nn;
        }
        else if(hma==h2 and mma==m2)
        {
            cout<<h2<<hma+1<<a<<m2<<mma+1<<nn;
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
