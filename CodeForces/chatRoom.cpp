#include <stdio.h>
#include <string.h>
int main()
{
    int index=0, b, n;
    char str[100], t[] = "hello";;
    scanf("%s",&str);
    int len = strlen(t);

    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]== t[index] )
        {
            index++;
        }
    }
    if( index == len)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
