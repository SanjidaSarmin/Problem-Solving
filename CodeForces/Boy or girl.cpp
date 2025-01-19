#include <stdio.h>
#include <string.h>
int main()
{

char str[100];
int distinct[26] = {0};
int length =0;
    scanf("%s", &str);

      for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        distinct[index] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (distinct[i] == 1) {
            length++;
        }
    }


    if ( length % 2 == 0 ){
         printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }



return 0;
}
