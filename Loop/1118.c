#include <stdio.h>

void isValid()
{
    double a, b, avg;

    avg = 0;
    a = b = 0;

    while (scanf("%lf", &a) != EOF)
        if (a <= 0 || a > 10.00)
        {
            printf("nota invalida\n");
            continue;
        }
        else
            break;

    while (scanf("%lf", &b) != EOF)
        if (b <= 0 || b > 10.00)
        {
            printf("nota invalida\n");
            continue;
        }
        else
            break;

    avg = (a + b) / 2;

    printf("media = %.2lf\n", avg);

    int x;

    do
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
    } while (x != 1 && x != 2);

    if (x == 1)
        isValid();
}

int main()
{
    isValid();

    return 0;
}
