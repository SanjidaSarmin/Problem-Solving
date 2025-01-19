#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, a = 0, b = 0, count = 0;

    scanf("%d", &n);
    int coins[n];


    for (i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
        a += coins[i];
    }


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (coins[j] < coins[j + 1]) {
                int temp = coins[j];
                coins[j] = coins[j + 1];
                coins[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < n; i++) {
        b += coins[i];
        count++;
        if (b > a - b) {
            break;
        }
    }


    printf("%d\n", count);

    return 0;
}
