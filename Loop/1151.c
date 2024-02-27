#include <stdio.h>

int main()
{
    int N, i, a = 0, b = 1, c = 0;

    scanf("%d", &N);

    for (i = 1; i < N; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("%d\n", a);

    return 0;
}