#include <stdio.h>
#include <ctype.h>

int main() {
    int n, pangram=1;
    char str[101];


    scanf("%d", &n);
    scanf("%s", str);


    int letter[26] = {0};


    for (int i = 0; i < n; i++) {
        char ch = tolower(str[i]);
        letter[ch - 'a'] = 1;
    }


    for (int i = 0; i < 26; i++) {
        if (letter[i] == 0) {
            pangram = 0;
            break;
        }
    }

    if (pangram == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
