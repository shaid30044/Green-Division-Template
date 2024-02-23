#include <stdio.h>

int main()
{
    int dec, reminder;
    int i, j;
    char hex[100];

    scanf("%d", &dec);

    for (i = 0; dec > 0; i++)
    {
        reminder = dec % 16;
        dec /= 16;

        hex[i] = reminder < 10 ? reminder + '0'
                               : reminder - 10 + 'A';
    }

    for (j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    printf("\n");

    return 0;
}