/*
          Aula 187: Como passar um ponteiro como parâmetro?

          Código escrito por Wagner Gaspar
          Maior de 2021
*/

void imprimir(int *num)
{
    printf("%d\n", *num);
    *num = 80;
}

int main()
{

    int idade = 35;

    imprimir(&idade);
    printf("No main: %d\n", idade);

    return 0;
}