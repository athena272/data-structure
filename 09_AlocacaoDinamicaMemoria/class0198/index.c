/*
            Aula 198: Alocação dinâmica de memória com a função calloc.

            Código escrito por Wagner Gaspar
            Maio de 2021
*/

int main()
{
    char *x;

    // x = malloc(sizeof(int));
    x = calloc(1, sizeof(char));

    if (x)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}