#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }

        bool liked = false;

        for (int c1 = 0; c1 < m; ++c1)
        {
            for (int c2 = c1 + 1; c2 < m; ++c2)
            {
                for (int c3 = c2 + 1; c3 < m; ++c3)
                {
                    for (int c4 = c3 + 1; c4 < m; ++c4)
                    {
                        bool found_v = false, found_i = false, found_k = false, found_a = false;

                        for (int r = 0; r < n; ++r)
                        {
                            if (carpet[r][c1] == 'v' || carpet[r][c2] == 'v' || carpet[r][c3] == 'v' || carpet[r][c4] == 'v')
                            {
                                found_v = true;
                            }
                            if (carpet[r][c1] == 'i' || carpet[r][c2] == 'i' || carpet[r][c3] == 'i' || carpet[r][c4] == 'i')
                            {
                                found_i = true;
                            }
                            if (carpet[r][c1] == 'k' || carpet[r][c2] == 'k' || carpet[r][c3] == 'k' || carpet[r][c4] == 'k')
                            {
                                found_k = true;
                            }
                            if (carpet[r][c1] == 'a' || carpet[r][c2] == 'a' || carpet[r][c3] == 'a' || carpet[r][c4] == 'a')
                            {
                                found_a = true;
                            }
                        }

                        if (found_v && found_i && found_k && found_a)
                        {
                            liked = true;
                            break;
                        }
                    }
                    if (liked)
                    {
                        break;
                    }
                }
                if (liked)
                {
                    break;
                }
            }
            if (liked)
            {
                break;
            }
        }

        cout << (liked ? "YES" : "NO") << endl;
    }

    return 0;
}
