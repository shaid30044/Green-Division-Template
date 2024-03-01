#include <stdio.h>

int main()
{
    int r, l, v, n;
    float pi = 3.1415;

    scanf("%d %d", &r, &l);

    v = (4 * pi * r * r * r) / 3;

    n = l / v;

    printf("%d\n", n);

    return 0;
}