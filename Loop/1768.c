#include <stdio.h>

int main()
{
    int n, treeSpace = 0, trunkSpace = 0;
    char asterisk = '*';

    while (scanf("%d", &n) != EOF)
    {
        if (n % 2 == 0)
            break;

        treeSpace = trunkSpace = n / 2 - 1;

        for (int i = 1; i <= n; i += 2)
        {
            for (int j = treeSpace; j >= 0; j--)
                printf(" ");

            for (int k = 1; k <= i; k++)
                printf("%c", asterisk);

            treeSpace--;
            printf("\n");
        }

        for (int i = 1; i <= 3; i += 2)
        {
            for (int j = trunkSpace; j >= 0; j--)
                printf(" ");

            for (int k = 1; k <= i; k++)
                printf("%c", asterisk);

            trunkSpace--;
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}