#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, s1, s2, s3, s4, s5, s6 ;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    s1 = a + b + c;
    s2 = a * b * c;
    s3 = (a + b)* c;
    s4 = a * (b + c);
    s5 = a + (b * c);
    s6 = ( a * b) + c;

    int arr[6] = {s1, s2, s3, s4, s5, s6};

     for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


        printf("%d\n", arr[5]);



return 0;
}
