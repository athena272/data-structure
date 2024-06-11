#include <stdio.h>
#include <stdlib.h>

/*
      Aula 169: Posso ter struct de struct?

      Escrito por Wagner Gaspar
      Abril de 2021
*/

typedef struct
{
    int dia, mes, ano;
} DataNas;

typedef struct
{
    DataNas dataNas;
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

    // leitura do novo campo data de nascimento
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    printf("Data de nas.: %d/%d/%d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}