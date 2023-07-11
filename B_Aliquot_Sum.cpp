#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define code()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
ll divisor[1000010];
int main()
{
    code();
    int t;
    cin >> t;
    ll arr[t + 10];
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 1000010; i++)
    {
        for (int j = i; j < 1000010; j += i)
        {
            divisor[j] += i;
        }
    }
    for (int i = 1; i < 1000010; i++)
    {
        divisor[i] = divisor[i]-i;
    }
    for (int i = 1; i <= t; i++)
    {
        if (divisor[arr[i]] == arr[i])
        {
            cout << "perfect" << nn;
        }
        else if (divisor[arr[i]] > arr[i])
        {
            cout << "abundant" << nn;
        }
        else
            cout << "deficient" << nn;
    }
    return 0;
}