#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int count[4] = {0};


    scanf("%s", s);


    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '1' && s[i] <= '3') {
            count[s[i] - '0']++;
        }
    }


    int first = 1;
    for (int i = 1; i <= 3; i++) {
        while (count[i] > 0) {
            if (!first) {
                printf("+");
            }
            printf("%d", i);
            first = 0;
            count[i]--;
        }
    }
    printf("\n");

    return 0;
}
