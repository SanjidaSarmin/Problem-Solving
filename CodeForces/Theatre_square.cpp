#include <stdio.h>
int main()
{
long long int m, n, a, x, y, z;

scanf("%lld",&m);
scanf("%lld",&n);
scanf("%lld",&a);


 x = m / a;
 y = n / a;

if ( m % a != 0){
    x += 1;
 }
 if ( n % a != 0){
    y += 1;
 }

 z = x * y;
 printf("%lld\n", z);
return 0;
}
