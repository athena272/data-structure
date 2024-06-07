#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite algo: ");
    fgets(palavras, 55, stdin);

    tam = 0;
    // removendo o caracter ENTER do fim da string
    while (palavras[tam] != '\0')
    {
        if (palavras[tam] == '\n') // se for o ENTER
            palavras[tam] = '\0';  // troca por fim de string
        tam++;
    }

    tam = 0;
    while (palavras[tam] != '\0')
    {
        printf("%d = %d\n", tam, palavras[tam]);
        tam++;
    }
    printf("Tamanho: %d\n", tam);

    return 0;
}