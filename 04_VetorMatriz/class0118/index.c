#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, j, soma = 0, mat[5][7];

    srand(time(NULL));

    // preenche a matriz com números entre 0 e 99
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }

    // acumula a soma dos elementos e imprime a matriz
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            soma += mat[i][j];         // acumula a soma
            printf("%2d ", mat[i][j]); // imprime a matriz
        }
        printf("\n");
    }

    // imprime a soma dos elementos da matriz
    printf("\n\nSoma total: %d\n\n", soma);

    return 0;
}