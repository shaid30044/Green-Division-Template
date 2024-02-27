#include <stdio.h>

int main()
{
    int n, x, count;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        count = 0;

        for (int i = 1; i <= x; i++)
            x % i == 0 ? count++
                       : 0;

        count > 2 ? printf("%d nao eh primo\n", x)
                  : printf("%d eh primo\n", x);
    }

    return 0;
}