#include <stdio.h>

int main()
{
    int i, N, X, Y;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        double div;

        if (Y == 0)
            printf("divisao impossivel\n");
        else
            div = (X * 1.00) / Y;

        printf("%.1lf\n", div);
    }

    return 0;
}