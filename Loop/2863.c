#include <stdio.h>

int main()
{
    int t;
    double ti, fastest;

    while (scanf("%d", &t) != EOF)
    {
        fastest = 11.00;

        while (t--)
        {
            scanf("%lf", &ti);

            if (fastest > ti)
                fastest = ti;
        }

        printf("%.2lf\n", fastest);
    }

    return 0;
}