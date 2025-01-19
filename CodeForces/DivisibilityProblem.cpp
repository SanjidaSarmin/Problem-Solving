#include <stdio.h>

int main() {
    long long a, b, n;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a, &b);


        long long r = a % b;


        long long m = (b - r) % b;


        printf("%lld\n", m);
    }

    return 0;
}
