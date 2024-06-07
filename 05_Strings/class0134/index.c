#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite algo: ");
    fgets(palavras, 55, stdin); // file

    // imprime na tela o tamanho da string palavras
    printf("Tamanho: %d\n", strlen(palavras));

    return 0;
}