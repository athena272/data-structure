/*
            Aula 201: Como liberar memória alocada dinamicamente com a função free

            Código escrito por Wagner Gaspar
            Junho de 2021
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    // aloca memória
    vet = malloc(tam * sizeof(int));

    if (vet)
    {
        printf("Memoria alocada com sucesso!\n");
        for (i = 0; i < tam; i++)
            *(vet + i) = rand() % 100;

        for (i = 0; i < tam; i++)
            printf("%d ", *(vet + i));
        printf("\n");

        // libera a memória alocada
        free(vet);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}