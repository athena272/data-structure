#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *value1, value2 = 50;

    char *char1, char2 = 'g';

    value1 = &value2;
    char1 = &char2;

    printf("Valor da variavel value2: %d\n", value2);
}