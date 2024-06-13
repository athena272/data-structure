/*
            Aula 197: Alocação dinâmica de memória com a função malloc.
            Retorna um ponteiro para a região de memória alocada ou NULL.

            Código escrito por Wagner Gaspar
            Maior de 2021
*/

int main()
{
    int *x;

    x = malloc(sizeof(int));

    if (x)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}