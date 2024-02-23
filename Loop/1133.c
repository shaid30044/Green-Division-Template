#include <stdio.h>

int main()
{
    int X, Y, i, min, max;

    scanf("%d %d", &X, &Y);

    min = X < Y ? X : Y;
    max = X > Y ? X : Y;

    for (i = min + 1; i < max; i++)
        i % 5 == 2 || i % 5 == 3 ? printf("%d\n", i) : 0;

    return 0;
}