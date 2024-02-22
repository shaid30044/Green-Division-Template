#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;

    scanf("%d %d %d", &num1, &num2, &num3);

    int originalNumbers[3] = {num1, num2, num3};

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d\n%d\n%d\n\n", num1, num2, num3);
    printf("%d\n%d\n%d\n", originalNumbers[0], originalNumbers[1], originalNumbers[2]);

    return 0;
}