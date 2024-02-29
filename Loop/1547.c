#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, qt, s, x, diff, idx;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &qt, &s);

        diff = 1000;
        idx = 0;

        for (int i = 1; i <= qt; i++)
        {
            scanf("%d", &x);

            if (diff > abs(s - x))
            {
                diff = abs(s - x);
                idx = i;
            }
        }
        printf("%d\n", idx);
    }

    return 0;
}