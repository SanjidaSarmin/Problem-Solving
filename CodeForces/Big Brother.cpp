#include <stdio.h>
int main()
{
    int a, b, n = 0;
    scanf("%d",&a);
    scanf("%d",&b);

    while ( a <= b){
        a = a * 3;
        b = b * 2;
        n ++;
    }
    printf("%d\n",n);


    return 0;
}
