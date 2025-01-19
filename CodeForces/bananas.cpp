#include <stdio.h>
int main()
{
    int a, b, c, n, sum = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    for( int i = 1; i <= c; i++){
        sum += i * a;
    }
    if ( sum > b){
        n = sum - b;
            printf("%d\n",n);
    } else {
        printf("0\n");
    }


return 0;
}
