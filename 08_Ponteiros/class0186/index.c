/*

          Aula 186: Por que năo usamos o & ao ler uma string com a funçăo scanf?

          Código escrito por Wagner Gaspar
          Maior de 2021

*/

int main()
{

    char palavra[100];

    scanf("%100[^\n]", palavra);
    printf("%s\n", palavra);

    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);

    return 0;
}