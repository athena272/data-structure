#include <stdio.h>
#include <stdlib.h>

int main()
{
    // criação das variáveis
    int i, vete1[10], vete2[10];

    // repetição para ler valores do teclado
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vete1[i]);
    }

    // repetição para realizar a multiplicação
    for (i = 0; i < 10; i++)
        vete2[i] = vete1[i] * vete1[i];

    // impressão do vetor 1 na tela
    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++)
        printf("%3d ", vete1[i]);

    // impressão do vetor 2 na tela
    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++)
        printf("%3d ", vete2[i]);

    return 0;
}