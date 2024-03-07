#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%2d ", *(vet + i));
    }

    printf("\n");
}

void printAlfa(char *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%2c ", *(vet + i));
    }

    printf("\n");
}

void createRandomVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(vet + i) = rand() % 100;
    }
}

void createVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", (vet + i));
    }

    printf("\n");
}

int main()
{
    srand(time(NULL));

    int vet[10];
    int vet2[5];
    char alfa[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    createRandomVector(vet, 10);

    printVector(vet, 10);

    printAlfa(alfa, 10);

    createVector(vet2, 5);

    printVector(vet2, 5);

    // printf("%p\t%p\n", vet, &vet[0]);
}