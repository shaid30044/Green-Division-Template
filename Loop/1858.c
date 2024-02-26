#include <stdio.h>

int main()
{
    int n, t, min;
    int count = 1;

    scanf("%d %d", &n, &t);
    min = t;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &t);

        if (min > t)
        {
            min = t;
            count = i + 1;
        }
    }

    printf("%d\n", count);

    return 0;
}