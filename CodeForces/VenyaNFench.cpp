#include <stdio.h>
int main()
{
    int a, h, n, x=0, y=0, total;

    scanf("%d",&n);
    scanf("%d",&h);

    for(int i = 0; i< n; i++){
        scanf("%d",&a);
        if( a <= h){
            x++;
        }else {
            y +=2;
        }

    }
total = x + y;

    printf("%d\n",total);


return 0;
}
