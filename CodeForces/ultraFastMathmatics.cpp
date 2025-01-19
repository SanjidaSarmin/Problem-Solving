#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char a[101], b[101], word[101];

    scanf("%s", a);
    scanf("%s", b);

    len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == b[i]) {
            word[i] = '0';
        } else {
            word[i] = '1';
        }
    }

    word[len] = '\0';

    printf("%s\n", word);

    return 0;
}
