#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palavras[100] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    gets(palavras);

    printf("%s\n\n", palavras);

    return 0;
}