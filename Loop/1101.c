#include <stdio.h>

int main()
{
    int M, N, min, max, i, sum = 0;

    for (;;)
    {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
            break;

        min = M < N ? M : N;
        max = M > N ? M : N;

        for (i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}