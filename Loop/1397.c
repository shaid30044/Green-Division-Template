#include <stdio.h>

int main()
{
    int n, a, b, p1, p2;

    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
            break;

        p1 = 0;
        p2 = 0;

        while (n--)
        {
            scanf("%d %d", &a, &b);

            if (a > b)
                p1++;
            else if (a < b)
                p2++;
        }

        printf("%d %d\n", p1, p2);
    }

    return 0;
}