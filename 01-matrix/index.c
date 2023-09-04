#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char matrix2[4][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}