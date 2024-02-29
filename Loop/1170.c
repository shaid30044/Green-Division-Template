#include <stdio.h>

int main()
{
    int n, days;
    double x;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%lf", &x);

        days = 0;

        while (x > 1)
        {
            x /= 2;
            days++;
        }
        printf("%d dias\n", days);
    }

    return 0;
}