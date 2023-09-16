#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createRandomVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(vet + i) = rand() % 501;
        // vet[i]
    }
}

void printVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d ", *(vet + i));
    }

    printf("\n");
}

void bubbleSort(int *vet, int size)
{
    int hasSwapped = 0;
    int qtdSwaps = 0;

    do
    {
        hasSwapped = 0;
        qtdSwaps++;
        for (int i = 0; i < size - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                int tempVar = vet[i];

                // swap
                vet[i] = vet[i + 1];
                vet[i + 1] = tempVar;

                hasSwapped = 1;
            }
        }
    } while (hasSwapped);

    printf("\nQuantidade de trocas: %d\n", qtdSwaps - 1);
}

int main()
{

    int randomVet[100];
    srand(time(NULL));

    createRandomVector(randomVet, 100);

    bubbleSort(randomVet, 100);

    printVector(randomVet, 100);
}