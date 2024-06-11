#include <stdio.h>
#include <stdlib.h>

/*
      Aula 167: Como criar novos tipos de dados em C com typedef struct

      Escrito por Wagner Gaspar
      Março de 2021
*/

typedef struct
{
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

struct Pessoa2
{
    int idade;
    char sexo;
    char nome[100];
};

int main()
{
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa2.idade = 35;
    pessoa2.sexo = 'f';
    strcpy(pessoa2.nome, "Maria Madalena");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);

    return 0;
}