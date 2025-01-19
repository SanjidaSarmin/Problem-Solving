#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, n;
    scanf("%d",&n);
    int array[101];
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }


    for(int i = 0; i< n; i++){
         printf("%d ",array[i]);
    }

   printf("\n");


    return 0;
}
