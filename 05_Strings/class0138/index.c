#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra[50] = {"abacate"};
    char *letra;

    // primeira ocorrência da letra a
    letra = strchr(palavra, 'a');

    printf("\n%c\n", *letra);       // imprime a letra a
    printf("\n%c\n", *(letra + 1)); // imprime a letra b
    printf("\n%c\n", *(letra + 2)); // imprime a segunda letra a

    letra = strrchr(palavra, 'a');

    printf("\n%c\n", *letra);       // imprime a última letra a
    printf("\n%c\n", *(letra + 1)); // imprime a letra t
    printf("\n%c\n", *(letra + 2)); // imprime a letra e

    return 0;
}