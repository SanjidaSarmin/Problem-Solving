#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p[n + 1], q[n + 1];

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    for (int i = 1; i <= n; i++) {
        q[p[i]] = i;
    }


    for (int i = 1; i <= n; i++) {
        printf("%d ", q[i]);
    }

    return 0;
}
