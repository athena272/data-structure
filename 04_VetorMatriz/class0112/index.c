#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, vet1[25], vet2[25], vet3[25];

    srand(time(NULL));

    // gera valores entre 0 e 99 para os vetores 1 e 2
    for (i = 0; i < 25; i++)
    {
        vet1[i] = rand() % 100;
        vet2[i] = rand() % 100;
    }

    // soma os valores da posição i do vetor 1 e 2 e salva no vetor 3
    for (i = 0; i < 25; i++)
    {
        vet3[i] = vet1[i] + vet2[i];
    }

    // imprime o vetor 1
    printf("\nVetor 1: ");
    for (i = 0; i < 25; i++)
    {
        printf("%3d ", vet1[i]);
    }

    // imprime o vetor 2
    printf("\nVetor 2: ");
    for (i = 0; i < 25; i++)
    {
        printf("%3d ", vet2[i]);
    }

    // imprime o vetor 3
    printf("\nVetor 3: ");
    for (i = 0; i < 25; i++)
    {
        printf("%3d ", vet3[i]);
    }

    return 0;
}