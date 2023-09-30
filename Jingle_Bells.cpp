#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    // Print the top part of the tree
    for (int i = 1; i <= N; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Print the trunk of the tree
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - 1; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
