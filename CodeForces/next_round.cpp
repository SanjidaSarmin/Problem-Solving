#include <stdio.h>
int main()
{
    int a, b, n, s, l;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[a];
    l = 0;
    s = 0;
    for ( int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);

    }
    n = arr[b-1];

    if ( n == 0)
    {
        for ( int i = 0; i < a; i++)
        {
            if ( arr[i] > n)
            {
                s++;
            }
        }
        printf("%d\n",s);

    }
    else
    {
        for (int i = 0; i < a; i++)
        {

            if (arr[i] >= n)
            {
                s++;
            }

        }
        printf("%d\n",s);

    }


    return 0;
}
