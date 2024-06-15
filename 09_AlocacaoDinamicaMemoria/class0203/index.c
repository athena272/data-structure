/*
            Aula 203: Dúvida

            Código escrito por Wagner Gaspar
            Junho de 2021

        Foram digitadas três linhas, onde cada uma das linhas contém o nome e a nota de
        um aluno. Escreva um programa que leia essas informações e monte uma tabela onde
        a primeira coluna é o nome e a segunda coluna é a nota.
*/

int main()
{

    char nomes[3][30];
    float notas[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite nome e nota do estudante: ");
        scanf("%s%f", &nomes[i], &notas[i]);
    }

    printf("\n\tNome\tNota\n");
    for (i = 0; i < 3; i++)
        printf("\t%s\t%.2f\n", nomes[i], notas[i]);

    return 0;
}