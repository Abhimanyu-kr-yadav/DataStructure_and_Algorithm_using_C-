#include <stdio.h>

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}

int power(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power(m * m, n / 2);
    else
        return m * power(m * m, (n - 1) / 2);
}

int main()
{
    printf("%d ", pow(2, 4));
    printf("%d ", power(2, 4));

    return 0;
}