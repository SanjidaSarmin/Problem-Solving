#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int s[1000], a = 0, num = 0;

    for (int i = 1; i <= 1000; i++) {
        int t = i, isLucky = 1;
        while (t > 0) {
            int digit = t % 10;
            if (digit != 4 && digit != 7) {
                isLucky = 0;
                break;
            }
            t /= 10;
        }
        if (isLucky) {
            s[a++] = i;
        }
    }


    for (int i = 0; i < a; i++) {
        if (n % s[i] == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
