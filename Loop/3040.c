#include <stdio.h>

int main()
{
    int n, h, d, g;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &h, &d, &g);

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}