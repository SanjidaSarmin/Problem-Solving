#include <stdio.h>
int main()
{
    int a, b, n, m=0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a);

        if(a == 1)
        {
            m++;
        }

    }
    if( m >=1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }




    return 0;
}
