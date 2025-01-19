#include <stdio.h>
#include <string.h>
int main()
{
    int a,b=1, n, m;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i = 1; i< n; i++){
        scanf("%d",&m);
        if(m != a){
            b++;
            a = m;
        }

    }
     printf("%d\n",b);


return 0;
}
