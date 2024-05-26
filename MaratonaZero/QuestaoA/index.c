#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 != 1 && num2 != 1 && num3 != 1)
    {
        printf("%d\n", 1);
    }
    else if (num1 != 2 && num2 != 2 && num3 != 2)
    {
        printf("%d\n", 2);
    }
    else if (num1 != 3 && num2 != 3 && num3 != 3)
    {
        printf("%d\n", 3);
    }

    return 0;
}