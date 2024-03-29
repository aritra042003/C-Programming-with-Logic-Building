#include <stdio.h>
// Q1
int factorial(int);
// int main()
// {
//     int n, fact;
//     printf("enter a number : ");
//     scanf("%d", &n);
//     fact = factorial(n);
//     printf(" factorial of  %d is %d", n, fact);
// }
// int factorial(int a)
// {
//     int b = 1;
// for (int i = 1; i <= a; i++)
// {
//     b = b * i;
// }
// return b;
// while (a)
// {
//     b = b * a;
//     a--;
// }
// return b;
// }

// Q2

int Combination(int, int);
int factorial(int a)
{
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
}

// int main()
// {
//     int c, n, r;
//     printf("enter n ,r : ");
//     scanf("%d %d", &n, &r);
//     c = Combination(n, r);
//     printf(" combination for %d and  %d is : %d ", n, r, c);
// }
int Combination(int a, int b)
{
    int d = factorial(a) / (factorial(b) * factorial(a - b));
    return d;
}

// Q3
//  int Arrangement(int, int);
//  int factorial(int a)
//  {
//      int b = 1;
//      for (int i = 1; i <= a; i++)
//      {
//          b = b * i;
//      }
//      return b;
//  }

// int main()
// {
//     int c, n, r;
//     printf("enter n ,r : ");
//     scanf("%d %d", &n, &r);
//     c = Arrangement(n, r);
//     printf(" Arrangement for %d and  %d is : %d ", n, r, c);
// }
// int Arrangement(int a, int b)
// {
//     int d = factorial(a) / factorial(a - b);
//     return d;
// }
// Q4
// int check(int, int);
// int main()
// {
//     int num, d, result;
//     printf("enter number and digit : ");
//     scanf("%d %d", &num, &d);
//     result = check(num, d);
//     if (result == 1)
//         printf("%d is present in %d ", d, num);
//     else
//         printf("%d is not present in %d ", d, num);
// }
// int check(int a, int b)
// {
//     int r;
//     while (a > 0)
//     {
//         r = a % 10;
//         a = a / 10;
//         if (r == b)
//             return 1;
//     }
//     return 0;
// }
// Q5
// void prime_factor(int);

// int main()
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     prime_factor(num);
//     return 0;
// }

// void prime_factor(int n)
// {
//     int i = 2;
//     while (n > 1)
//     {
//         while (n % i == 0)
//         {
//             printf("%d ", i);
//             n = n / i;
//         }
//         i++;
//     }
// }
