#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[100];
    scanf("%100[^\n]", palavras);

    printf("%s", palavras);

    return 0;
}
