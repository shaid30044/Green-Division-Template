#include <stdio.h>

int main()
{
    double A, B, C, parameter, area;

    scanf("%lf %lf %lf", &A, &B, &C);

    parameter = (A + B + C);
    area = (((A + B) * C) / 2);

    if (((A + B) > C) && ((A + C) > B) && ((B + C) > A))
        printf("Perimetro = %.1lf\n", parameter);
    else
        printf("Area = %.1lf\n", area);

    return 0;
}