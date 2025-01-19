#include <stdio.h>
#include <string.h>

int main()
{
    int n, a = 0, b = 0;
    char ch;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ch);
        if (ch == 'A')
        {
            a++;
        }
        else if (ch == 'D')
        {
            b++;
        }
    }

    if (a > b)
    {
        printf("Anton\n");
    }
    else if (a < b)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}
