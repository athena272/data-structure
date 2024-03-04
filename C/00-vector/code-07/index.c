// Gera numeros aleatorios sem repeticao

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b)
{
    // Convertendo os ponteiros genéricos de volta aos tipos originais
    int *valorA = (int *)a;
    int *valorB = (int *)b;

    // Compara os valores apontados por a e b
    return *valorA - *valorB;
}

int main()
{
    int i = 0, isEqual, vet[100];
    srand(time(NULL));

    do
    {

        vet[i] = rand() % 100;
        isEqual = 0;
        for (int j = 0; j < i; j++)
        {
            // Se o elemento já exister, troque por outro
            if (vet[j] == vet[i])
            {
                isEqual = 1;
            }
        }

        if (isEqual == 0)
        {
            i++;
        }

    } while (i < 100);

    // Classificar o array usando qsort
    qsort(vet, 100, sizeof(int), comparar);

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}