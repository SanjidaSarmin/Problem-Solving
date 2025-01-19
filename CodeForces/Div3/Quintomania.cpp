#include <stdio.h>
int main()
{
    int a, b, c, d, n, x;
    scanf("%d",&x);
    int arr[1000];

    for ( int i = 0; i < x; i++)
    {
        scanf("%d",&n);
        c = 0;
        a = 0;
        d = 0;
        for (int j = 0; j < n; j++)
        {

            scanf("%d",&arr[j]);

            b = arr[j]- c;
            c = arr[j];

            if ( b == 5|| b == -5 || b == 7 || b == -7)
            {
                d++;
            }
            else
            {
                a++;

            }

        }

        a = a - 1;

        if ( a > 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }




    return 0;
}
