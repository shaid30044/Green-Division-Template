#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, c, l;
    double area;

    while (scanf("%d", &n) != EOF)
    {
        scanf("%d %d %d", &h, &c, &l);

        area = 0;
        area = (n * (sqrt(h * h + c * c) / 100.00) * (l / 100.00));

        printf("%.4lf\n", area);
    }

    return 0;
}