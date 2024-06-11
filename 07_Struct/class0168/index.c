#include <stdio.h>
#include <stdlib.h>

/*
      Aula 168: Como criar uma struct com dados lidos do teclado

      Escrito por Wagner Gaspar
      Março de 2021
*/

typedef struct
{
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

int main()
{
    Pessoa pessoa;

    printf("Digite se nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    printf("Digite f ou m para o sexo:");
    scanf("%c", &pessoa.sexo);

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}