#include <stdio.h>

int main()
{
    long long x, y;

    while (scanf("%lld %lld", &x, &y) != EOF)
        printf("%lld\n", x < y ? y - x : x - y);

    return 0;
}