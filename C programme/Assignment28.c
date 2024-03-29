#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int hcf(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
            return b;
        else
            return hcf(a % b, b);
    }
    else
    {
        if (b % a == 0)
            return a;
        else
            return hcf(a, b % a);
    }
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
void printFib(int n)
{
    if (n > 0)
    {
        printFib(n - 1);
        printf(" %d", fib(n - 1));
    }
}

int countDigit(int n)
{
    if (n == 0)
        return 0;
    return countDigit(n / 10) + 1;
}
double power(double num, double exp)
{
    if (exp > 0)
        return num * power(num, exp - 1);
    else if (exp < 0)
        return 1 / num * power(num, exp + 1);
    else
        return 1;
}
int main()
{
    //     int H = hcf(2, 4);
    //     printf("%d", H);
    // printFib(10);
    double ans=power(2,-1);
    printf("%.2lf",ans);

}