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
#define yes cout <<"YES\n";
#define no cout <<"NO\n";
#define sp " "
#define asort(a) sort(a.begin(), a.end())
#define point(a) fixed << setprecision(a)
#define pi 3.1415926535897932384626433832795
#define code() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll p1max= max(a,b);
    ll p1min= min(a,b);
    ll p2max= max(c,d);
    ll p2min= min(c,d);
    if(p1min<p2max and p2min<p1max)
    {
        yes
    }
    else
    {
        no
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