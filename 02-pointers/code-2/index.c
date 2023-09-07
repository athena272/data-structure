#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int vet[10];

    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
    }

    printf("%p\t%p\n", vet, &vet[0]);
}