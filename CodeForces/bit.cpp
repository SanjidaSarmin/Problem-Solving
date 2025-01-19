#include <stdio.h>
#include <string.h>
int main()
{
    int n, x =0;
    scanf("%d",&n);
    char statement[4];

    for( int i = 0; i<n; i++)
    {
        scanf("%s", statement);
        if (strstr(statement, "++") != NULL)
        {
            x++;
        }
        else if (strstr(statement, "--") != NULL)
        {
            x--;
        }
    }
    printf("%d\n", x);



    return 0;
}
