#include <stdio.h>
#include <string.h>

int main()
{
    char ft[101];
    scanf("%s", ft);


    if (strstr(ft, "0000000") != NULL || strstr(ft, "1111111") != NULL)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
