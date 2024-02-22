#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, temp;

    scanf("%lf %lf %lf", &A, &B, &C);

    temp = (B * B) - (4 * A * C);

    if (temp > 0 && A != 0)
    {
        temp = sqrt(temp);

        printf("R1 = %.5lf\n", (-B + temp) / (2 * A));
        printf("R2 = %.5lf\n", (-B - temp) / (2 * A));
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}