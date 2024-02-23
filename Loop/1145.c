#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y;)
    {
        for (int j = 1; j <= x; j++)
        {
            printf("%d", i++);

            if (j == x)
                break;

            printf(" ");
        }

        printf("\n");
    }

    return 0;
}