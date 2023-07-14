#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;
    long long a = 1;
    for (long long i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z' || x[i] >= 'A' && x[i] <= 'Z')
        {
            a = 0;
        }
    }
    for (long long i = 0; i < y.size(); i++)
    {
        if (y[i] >= 'a' && y[i] <= 'z' || y[i] >= 'A' && y[i] <= 'Z')
        {
            a = 0;
        }
    }
    if (a == 0)
    {
        cout << "NaN" << endl;
    }
    else
    {
        cout << stoi(x) - stoi(y) << endl;
    }
}
