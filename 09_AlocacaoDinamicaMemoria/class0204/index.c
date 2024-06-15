/*
            Aula 204: É possível percorrer uma matriz dinâmica sem colchetes?

            Código escrito por Wagner Gaspar
            Junho de 2021

        vetor de vetores -> int* -> 10 27 32
                            int* -> 11 75 49
                            int* -> 43 82 10
                            int* -> 12 47 62
*/

#include <cstddef>
int main()
{

    int **mat, i, j;

    mat = malloc(5 * sizeof(int *));

    for (i = 0; i < 5; i++)
        mat[i] = malloc(5 * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            *(*(mat + i) + j) = rand() % 100;
        // mat[i][j] = rand() % 100;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d ", *(*(mat + i) + j));
        // printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}