#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrix[3][3];
    char matrix2[4][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}