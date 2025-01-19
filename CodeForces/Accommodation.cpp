#include <stdio.h>
int main()
{
    int p, q, n, m=0, t=0;

    scanf("%d",&n);
  for(int i = 0; i< n; i++){
    scanf("%d" "%d",&p, &q);
    m = q - p;
    if(m >= 2){
        t++;
    }

  }

    printf("%d\n",t);


return 0;
}
