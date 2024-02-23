#include <stdio.h>

int main()
{
    char ch;
    int idx = 0;

    scanf("%c", &ch);

    idx = ch - 64;

    printf("%d\n", idx);

    return 0;
}