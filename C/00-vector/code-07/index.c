//Gera numeros aleatorios sem repeticao

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, vet[25];
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        vet[i] = rand() % 100;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}