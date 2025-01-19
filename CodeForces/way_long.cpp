#include <stdio.h>
#include <string.h>
int main()
{
int x;
scanf("%d",&x);
char str[100];

for ( int i = 0; i < x; i++){
    scanf("%s", &str);
    int length = strlen(str);
    if ( length > 10 ){
         printf("%c%d%c\n",str[0],(length-2),str[(strlen(str)-1)]);
    } else {
        printf("%s\n",str);
    }


}

return 0;
}
