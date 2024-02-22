#include <stdio.h>

int main()
{
    double N;

    scanf("%lf", &N);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (int)(N / 100));
    N -= (int)(N / 100) * 100;
    printf("%d nota(s) de R$ 50.00\n", (int)(N / 50));
    N -= (int)(N / 50) * 50;
    printf("%d nota(s) de R$ 20.00\n", (int)(N / 20));
    N -= (int)(N / 20) * 20;
    printf("%d nota(s) de R$ 10.00\n", (int)(N / 10));
    N -= (int)(N / 10) * 10;
    printf("%d nota(s) de R$ 5.00\n", (int)(N / 5));
    N -= (int)(N / 5) * 5;
    printf("%d nota(s) de R$ 2.00\n", (int)(N / 2));

    printf("MOEDAS:\n");
    N -= (int)(N / 2) * 2;
    printf("%d moeda(s) de R$ 1.00\n", (int)N);
    N -= (int)N;
    printf("%d moeda(s) de R$ 0.50\n", (int)(N / 0.50));
    N -= (int)(N / 0.50) * 0.50;
    printf("%d moeda(s) de R$ 0.25\n", (int)(N / 0.25));
    N -= (int)(N / 0.25) * 0.25;
    printf("%d moeda(s) de R$ 0.10\n", (int)(N / 0.10));
    N -= (int)(N / 0.10) * 0.10;
    printf("%d moeda(s) de R$ 0.05\n", (int)(N / 0.05));
    N -= (int)(N / 0.05) * 0.05;
    printf("%d moeda(s) de R$ 0.01\n", (int)(N / 0.01));

    return 0;
}