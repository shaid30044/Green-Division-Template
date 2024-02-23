#include <stdio.h>

int main()
{
    int row, column;

    scanf("%d %d", &row, &column);

    printf("%d\n", (row + column) % 2 == 0 ? 1 : 0);

    return 0;
}