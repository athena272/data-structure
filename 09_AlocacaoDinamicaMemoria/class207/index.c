#include <stdio.h>
#include <stdlib.h>

/*
            Aula 207: Curiosidade sobre as funções malloc e calloc

            Código escrito por Wagner Gaspar
            Junho de 2021

            OBSERVAÇÃO:
            Este é apenas um código de exemplo e ambos os vetores podem estar com o valor zero em todas as posições de memória se forem vetores pequenos e não possuir lixo de memória.
*/

int main()
{

    int i, *vet1, *vet2;

    vet1 = malloc(10 * sizeof(int));
    vet2 = calloc(10, sizeof(int));

    printf("\nCom malloc: ");
    for (i = 0; i < 10; i++)
        printf("%d ", vet1[i]);

    printf("\nCom calloc: ");
    for (i = 0; i < 10; i++)
        printf("%d ", vet2[i]);

    return 0;
}