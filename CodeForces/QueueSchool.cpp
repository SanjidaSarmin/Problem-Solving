#include <stdio.h>
#include <string.h>

int main() {
    int n, t;
    char str[51];


    scanf("%d %d", &n, &t);
    scanf("%s", str);


    for (int j = 0; j < t; j++) {

        for (int i = 0; i < n - 1; i++) {
            if (str[i] == 'B' && str[i + 1] == 'G') {
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
            }
        }
    }

    printf("%s\n", str);

    return 0;
}
