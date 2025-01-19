#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n, m=0, i;
    char s[100], ch, st = '\0';
    scanf("%d",&n);
    for( i = 0; i < n; i++)
    {
        scanf(" %c",&ch);

        if(st == ch ){
            m++;
        }
        st = ch;

    }
    printf("%d\n",m);

    return 0;
}
