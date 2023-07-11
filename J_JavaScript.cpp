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
    string a,b;
    cin>>a>>b;
    // for(ll i=0;i<a.size();i++) a[i]=tolower(a[i]);
    // for(ll i=0;i<b.size();i++) b[i]=tolower(b[i]);
    bool f=1;
    for(ll i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'|| a[i]>='A' && a[i]<='Z' )
        {
            f=0;
        }
    }
    for(ll i=0;i<b.size();i++){
        if(b[i]>='a' && b[i]<='z'|| b[i]>='A' && b[i]<='Z')
        {
            f=0;
        }
    }
    if(f==0) cout<<"NaN"<<nn;
    else{
        // ll x=a-b;
        cout<<stoi(a)-stoi(b)<<nn; 
    }


}
int main()
{
    code();
    // ll test;
    // cin >> test;
    // while (test--)
    // {
    // solve();
    // }
    solve();
    return 0;
}