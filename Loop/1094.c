#include <stdio.h>

int main()
{
    int i, N, num, CTotal = 0, RTotal = 0, STotal = 0, total;
    double CP, RP, SP;
    char ch;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %c", &num, &ch);

        if (ch == 'C')
            CTotal += num;
        if (ch == 'R')
            RTotal += num;
        if (ch == 'S')
            STotal += num;
    }

    total = CTotal + RTotal + STotal;

    CP = (CTotal / (total * 1.0)) * 100.00;
    RP = (RTotal / (total * 1.0)) * 100.00;
    SP = (STotal / (total * 1.0)) * 100.00;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", CTotal);
    printf("Total de ratos: %d\n", RTotal);
    printf("Total de sapos: %d\n", STotal);
    printf("Percentual de coelhos: %.2lf %%\n", CP);
    printf("Percentual de ratos: %.2lf %%\n", RP);
    printf("Percentual de sapos: %.2lf %%\n", SP);

    return 0;
}