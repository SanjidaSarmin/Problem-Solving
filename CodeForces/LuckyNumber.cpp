#include <stdio.h>
#include <string.h>

int main()
{
    char n[20];
    scanf("%s", n);

    int num = 0;


    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            num++;
        }
    }


    int lucky = 1;
    if (num == 0)
    {
        lucky = 0;
    }
    else
    {
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = 0;
                break;
            }
            num /= 10;
        }
    }


    if (lucky)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
