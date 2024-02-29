#include <stdio.h>

int main()
{
    long long m, n, factorialOfM, factorialOfN, sum;

    while (scanf("%lld %lld", &m, &n) != EOF)
    {
        factorialOfM = factorialOfN = 1;
        sum = 0;

        while (m > 0)
            factorialOfM *= m--;

        while (n > 0)
            factorialOfN *= n--;

        sum = factorialOfM + factorialOfN;

        printf("%lld\n", sum);
    }

    return 0;
}