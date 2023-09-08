#include <stdio.h>

int main()
{
    float temp[5], biggerTemp, smallerTemp;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a %dª temperatura: ", i + 1);
        scanf("%f", (temp + i));

        if (i == 0)
        {
            smallerTemp = *(temp + i);
            biggerTemp = *(temp + i);
        }

        else
        {
            if (biggerTemp < *(temp + i))
            {
                biggerTemp = *(temp + i);
            }

            if (smallerTemp > *(temp + i))
            {
                smallerTemp = *(temp + i);
            }
        }
    }

    printf("Biggest temp: %.2f\n", biggerTemp);
    printf("Smaller temp: %.2f\n", smallerTemp);
}