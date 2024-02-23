#include <stdio.h>

int main()
{
    int i, x;

    for (;;)
    {
        scanf("%d", &x);

        if (x == 0)
            break;

        for (i = 1; i < x; i++)
            printf("%d ", i);

        printf("%d\n", x);
    }

    return 0;
}