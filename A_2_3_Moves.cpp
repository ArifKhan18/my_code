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
    ll x;
    cin>>x;
    if(x==1) cout<<"2"<<nn;
    else if(x==2 || x==3) cout<<1<<nn;
    else if(x%3==0) cout<<x/3<<nn;
    else cout<<(x/3)+1<<nn;
    
    
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