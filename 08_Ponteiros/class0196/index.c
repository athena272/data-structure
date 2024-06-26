/*
            Aula 196: Exercício 5

            Código escrito por Wagner Gaspar
            Maior de 2021

            5) Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

int strcpy(char *destino, char *origem)
{
    int i = 0;

    while (*(origem + i) != '\0')
    {
        *(destino + i) = *(origem + i);
        i++;
    }
    *(destino + i) = '\0';
    return i;
}

int main()
{
    char destino[25], origem[25] = {"Bom dia."};

    printf("Tamanho: %d\n", strcpy(destino, origem));
    printf("Destino: %s\n", destino);

    return 0;
}