#include <stdio.h>

int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    int n;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);

        if (rx >= ax && rx <= bx && rx >= dx && rx <= cx && ry >= ay && ry <= dy && ry >= by && ry <= cy)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}