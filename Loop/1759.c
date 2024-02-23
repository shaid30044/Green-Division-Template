#include <stdio.h>

int main()
{
    int n;
    char ho[3] = "Ho";

    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        printf("%s ", ho);

    printf("%s!\n", ho);

    return 0;
}