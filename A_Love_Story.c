#include <stdio.h>
int main()
{
    //char s[11] = "codeforces";
    int n = 10;
    int x;

    
    scanf("%d", &x);
    while (x--)
    {
        char s[] = "codeforces";
        char o[11];
        int count = 0;
        scanf("%s",&o);
        for (int i = 0; i < n; i++)
        {

            if (o[i] != s[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}