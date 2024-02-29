#include <stdio.h>

int main()
{
    int n, order = 1, count;

    count = 1;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i <= n; i++)
            for (int j = 1; j <= i; j++)
                count++;

        if (count == 1)
            printf("Caso %d: %d numero\n", order, count);
        else
            printf("Caso %d: %d numeros\n", order, count);

        printf("0");

        for (int i = 0; i <= n; i++)
            for (int j = 1; j <= i; j++)
                printf(" %d", i);

        printf("\n\n");
        order++;
        count = 1;
    }

    return 0;
}