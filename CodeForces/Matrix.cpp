#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[5][5];
    int x, y, a, b, n;

    for(int i = 0; i< 5; i++)
    {
        for(int j =0; j< 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1){
                x = i + 1;
                y = j + 1;
            }
        }
    }

    int moves = abs(x - 3) + abs(y - 3);
     printf("%d\n", moves);

    return 0;
}
