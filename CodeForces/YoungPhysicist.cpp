#include <stdio.h>
int main()
{
    int a=0, b=0, c=0, n, x, y, z;

    scanf("%d",&n);
   for( int i = 0; i< n; i++){
        scanf("%d %d %d", &x, &y, &z);

       a += x;
       b += y;
       c += z ;

   }
   if( a == 0 && b == 0 && c == 0){
        printf("YES\n");
   }else{
       printf("NO\n");
   }


return 0;
}
