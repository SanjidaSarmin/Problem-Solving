#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    while (1) {
        y++;
        int year = y;
        int d[10] = {0};
        int n = 1;


        while (year > 0) {
            int i = year % 10;
            if (d[i] == 1) {
                n = 0;
                break;
            }
            d[i] = 1;
            year /= 10;
        }

        if (n) {
            printf("%d\n", y);
            break;
        }
    }

    return 0;
}
