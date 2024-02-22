#include <stdio.h>

int main()
{
    int x, y;
    double z, salary;

    scanf("%d %d %lf", &x, &y, &z);

    salary = y * z;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", x, salary);

    return 0;
}