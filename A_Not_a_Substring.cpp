#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        int openCount = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                openCount++;
            }
        }

        if (openCount == 0 || openCount == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "(";
            for (int i = 1; i <= n; i++)
            {
                cout << "()";
                if (i == openCount)
                {
                    cout << ")";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
