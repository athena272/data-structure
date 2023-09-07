#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVector(int *vet)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(vet + i));
    }

    printf("\n");
}

int main()
{
    srand(time(NULL));
    int vet[10];

    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
    }

    printVector(vet);

    // printf("%p\t%p\n", vet, &vet[0]);
}