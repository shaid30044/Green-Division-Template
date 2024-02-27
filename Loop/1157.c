#include <stdio.h>

int main()
{
    int i, N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        N % i == 0 ? printf("%d\n", i) : 0;

    return 0;
}