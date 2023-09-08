#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createRandomVector(int *vet, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(vet + i) = rand() % 101;
    }
}

int main()
{

    int randomVet[100];
    srand(time(NULL));

    createRandomVector(randomVet, 100);
}