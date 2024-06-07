#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    fgets(palavras, 50, stdin); // file

    printf("%s\n\n", palavras);

    return 0;
}