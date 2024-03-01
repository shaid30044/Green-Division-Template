#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    while (n--)
    {
        int x, y, sum;
        sum = 0;

        scanf("%d %d", &x, &y);

        sum = (x * y) / 2;

        printf("%d cm2\n", sum);
    }

    return 0;
}