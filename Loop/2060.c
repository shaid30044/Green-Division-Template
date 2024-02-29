#include <stdio.h>

int main()
{
    int n, x;
    int mul2, mul3, mul4, mul5;

    mul2 = mul3 = mul4 = mul5 = 0;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
            mul2++;
        if (x % 3 == 0)
            mul3++;
        if (x % 4 == 0)
            mul4++;
        if (x % 5 == 0)
            mul5++;
    }

    printf("%d Multiplo(s) de 2\n", mul2);
    printf("%d Multiplo(s) de 3\n", mul3);
    printf("%d Multiplo(s) de 4\n", mul4);
    printf("%d Multiplo(s) de 5\n", mul5);

    return 0;
}