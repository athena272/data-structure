#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int num2[10];

    for (i = 0; i < 10; i++)
    { // preenche o vetor lendo elementos do teclado
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &num2[i]);
    }

    for (i = 0; i < 10; i++) // multiplica cada elemento por 3
        num2[i] = num2[i] * 3;

    printf("\n\n");
    for (i = 0; i < 10; i++) // imprime o vetor na tela
        printf("%d ", num2[i]);
    printf("\n\n");

    return 0;
}