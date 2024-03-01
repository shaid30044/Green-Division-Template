#include <stdio.h>

int main()
{
    int n, count;

    scanf("%d", &n);

    while (n--)
    {
        char c[101], lowercase[101];
        count = 0;

        scanf("%s", c);

        for (int i = 0; c[i] != '\0'; i++)
            if (c[i] >= 'a' && c[i] <= 'z')
                lowercase[count++] = c[i];

        for (int i = count - 1; i >= 0; i--)
            printf("%c", lowercase[i]);

        printf("\n");
    }

    return 0;
}
