#include <stdio.h>

int main()
{
    int i, N, X;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &X);

        X > 0 && X % 2 == 0 && printf("EVEN POSITIVE\n");
        X > 0 && X % 2 != 0 && printf("ODD POSITIVE\n");
        X < 0 && X % 2 == 0 && printf("EVEN NEGATIVE\n");
        X < 0 && X % 2 != 0 && printf("ODD NEGATIVE\n");
        X == 0 && printf("NULL\n");
    }

    return 0;
}