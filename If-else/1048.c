#include <stdio.h>

int main()
{
    double salary, newSalary, earned, percentage;

    scanf("%lf", &salary);

    if (salary <= 400.00)
        percentage = 15;
    else if (salary <= 800.00)
        percentage = 12;
    else if (salary <= 1200.00)
        percentage = 10;
    else if (salary <= 2000.00)
        percentage = 7;
    else
        percentage = 4;

    earned = salary * (percentage / 100);
    newSalary = salary + earned;

    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", earned);
    printf("Em percentual: %.0lf %%\n", percentage);

    return 0;
}