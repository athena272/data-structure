#include <stdio.h>

int main()
{
    char letra;
    printf("Digite um caracter: ");
    letra = fgetc(stdin);
    printf("Caracter digitado: %c\n", letra);

    return 0;
}