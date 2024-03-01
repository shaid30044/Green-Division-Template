#include <stdio.h>

int main()
{
    int m, n;
    int bills[] = {2, 5, 10, 20, 50, 100};

    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (m == 0 && n == 0)
            break;

        int extra, sum, count;
        extra = m - n;
        count = 0;

        for (int i = 0; i < 6; i++)
        {
            for (int j = 1; j < 6; j++)
            {
                sum = 0;

                sum = bills[i] + bills[j];

                if (extra == sum)
                {
                    count++;
                    break;
                }
            }

            if (count > 0)
                break;
        }

        if (count > 0)
            printf("possible\n");
        else
            printf("impossible\n");
    }

    return 0;
}