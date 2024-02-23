#include <stdio.h>

int main()
{
    int X, Y, min, max;
    int sum = 0;

    scanf("%d %d", &X, &Y);

    min = X < Y ? X : Y;
    max = X > Y ? X : Y;

    for (int i = min + 1; i < max; i++)
        i % 2 != 0 && (sum += i);

    printf("%d\n", sum);

    return 0;
}