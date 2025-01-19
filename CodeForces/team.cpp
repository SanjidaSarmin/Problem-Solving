#include <stdio.h>
int main()
{
    int c = 0, n, i, x, y, z;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        int b = 0;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        b = x + y + z;

        if ( b >= 2)
        {
            c++;
        }

    }
    printf("%d\n", c);


    return 0;
}
