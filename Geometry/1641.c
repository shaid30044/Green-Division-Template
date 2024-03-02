#include <stdio.h>
#include <math.h>

int main()
{
    int r, w, l, count;
    double sum;

    count = 0;

    while (scanf("%d", &r) != EOF)
    {
        if (r == 0)
            break;

        scanf("%d %d", &w, &l);

        sum = 0;
        sum = sqrt(w * w + l * l) / 2.0;
        count++;

        if (sum <= r)
            printf("Pizza %d fits on the table.\n", count);
        else
            printf("Pizza %d does not fit on the table.\n", count);
    }

    return 0;
}