#include <stdio.h>

int main() {
    int s1, s2, s3, s4, d = 1, num;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    int arr[4] = {s1, s2, s3, s4};


    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 1; i < 4; i++) {
        if (arr[i] != arr[i - 1]) {
            d++;
        }
    }

    num = 4 - d;
    printf("%d\n", num);

    return 0;
}
