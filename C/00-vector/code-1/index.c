#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = 1 + rand() % 100;
    }

    for (int i = 0; i < 10; i++)
    {

        printf("%d ", numbers[i]);
    }

    printf("\n");
}
