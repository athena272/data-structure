#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, lastIndex = 19, auxiliar, vetor[20];

    for (i = 0; i < 20; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("Vetor original: ");
    for (i = 0; i < 20; i++)
    {
        printf("%2d ", vetor[i]);
    }

    // Ate a metade
    for (i = 0; i < 10; i++)
    {
        auxiliar = vetor[i];
        vetor[i] = vetor[lastIndex];
        vetor[lastIndex] = auxiliar;
        lastIndex--;
    }

    printf("\nVetor invertid: ");
    for (i = 0; i < 20; i++)
    {
        printf("%2d ", vetor[i]);
    }

    printf("\n");
    return 0;
}