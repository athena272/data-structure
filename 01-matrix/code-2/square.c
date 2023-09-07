#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pedir de valores no vetor
    int vetor1[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    int vetor2[10];

    for (int i = 0; i < 10; i++)
    {
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", vetor1[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}