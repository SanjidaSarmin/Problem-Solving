#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

char str[1000], ch;
scanf("%s",&str);
    str[0] = toupper(str[0]);

         printf("%c\n",str);
   return 0;
}
