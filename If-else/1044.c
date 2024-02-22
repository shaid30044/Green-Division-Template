#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    printf(A % B == 0 || B % A == 0 ? "Sao Multiplos\n"
                                    : "Nao sao Multiplos\n");

    return 0;
}