#include <stdio.h>

int main()
{
    double v, d, r, h, a;
    double pi = 3.14;

    while (scanf("%lf %lf", &v, &d) != EOF)
    {
        h = a = 0;

        r = d / 2.00;
        h = v / (pi * r * r);
        a = pi * r * r;

        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", a);
    }

    return 0;
}