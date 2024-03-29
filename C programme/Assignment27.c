#include <stdio.h>
int sumN(int n)
{
    if (n == 1)
        return 1;
    return n + sumN(n - 1);
}

int sumOddN(int n)
{
    if (n == 1)
        return 1;
    return 2 * n - 1 + sumOddN(n - 1);
}

int sumEvenN(int n)
{
    if (n == 1)
        return 2;
    return 2 * n + sumEvenN(n - 1);
}

int sumSquareN(int n)
{
    if (n == 1)
        return 1;
    return n * n + sumSquareN(n - 1);
}
int sum_of_digits(int n)
{
    if (n)
        return n % 10 + sum_of_digits(n / 10);
    return 0;
}
int main()
{
    printf("%d",sum_of_digits(123));
}