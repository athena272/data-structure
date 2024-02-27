#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *value1, value2 = 50;

    char *char1, char2 = 'g';

    value1 = &value2;
    char1 = &char2;

    printf("Variable value value2: %d\n", value2);
    printf("Memory address value2: %p\n", &value2);
    printf("Memory address value1: %p\n", value1);
    printf("Variable value value1: %d\n", *value1);

    printf("==========================================\n");

    printf("Variable value char2: %c\n", char2);
    printf("Memory address char2: %p\n", &char2);
    printf("Memory address char1: %p\n", char1);
    printf("Variable value char1: %c\n", *char1);
}