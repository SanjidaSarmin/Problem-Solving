#include <stdio.h>

int main() {
    long long n, k, m;
    scanf("%lld %lld", &n, &k);


    long long num = (n + 1) / 2;


    if (k <= num) {
            m =  2 * k - 1;
        printf("%lld\n",m);
    } else {
        m = 2 * (k - num);
        printf("%lld\n", m);
    }

    return 0;
}
