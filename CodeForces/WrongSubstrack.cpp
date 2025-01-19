#include <stdio.h>
int main()
{
    int a, b, n, c, d;
    scanf("%d",&a);
    scanf("%d",&b);

    for( int i = 0; i < b; i++)
    {
        if (a % 10 == 0 )
        {
            a = a / 10;

        }
        else
        {
            a = a - 1;

        }

    }

    printf("%d\n",a);

    return 0;
}
