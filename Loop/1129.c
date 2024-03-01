#include <stdio.h>

int main()
{
    int n, x[5], idx = 0, count = 0;

    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
            break;

        while (n--)
        {
            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &x[i]);

                if (x[i] <= 127)
                {
                    count++;
                    idx = i;
                }
            }

            if (count == 1)
            {
                if (idx == 0)
                    printf("A\n");
                else if (idx == 1)
                    printf("B\n");
                else if (idx == 2)
                    printf("C\n");
                else if (idx == 3)
                    printf("D\n");
                else if (idx == 4)
                    printf("E\n");
            }
            else
                printf("*\n");

            idx = 0;
            count = 0;
        }
    }

    return 0;
}