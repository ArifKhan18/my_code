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
#define code()                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
using namespace std;
void solve() {
  string a, b;
  cin >> a >> b;
  int c = 0, r = 0;
  int len = 0;
  if (a.size() <= b.size())
    len = a.size() - 1;
  else
    len = b.size() - 1;
  string tmp = "";
  while (len--) {
    int x = a[len] - '0' + b[len] - '0';
    c = x / 10;

    r = x % 10;
  }
}
int main() {
  code();
  ll test = 1;
  // cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}