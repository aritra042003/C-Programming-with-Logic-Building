#include <stdio.h>
#include <math.h>
int main()
{ // Q1
    // int a, b, fib, n;
    // printf("enter the value of n : ");
    // scanf("%d", &n);
    // a = 0, b = 1;
    // if (n == 0 || n == 1)
    // {
    //     if (n == 1)
    //     {
    //         printf("second term :  1 ");
    //         fib = 1;
    //     }

    //     else
    //     {
    //         printf("First term :  0 ");
    //         fib = 0;
    //     }
    // }
    // else
    // {
    //     for (int i = 3; i <= n; i++)
    //     {
    //         fib = a + b;
    //         a = b;
    //         b = fib;
    //     }
    // }
    // printf("\n no %d term in fibonacci series is : %d", n, fib);
    // int n, a, b, c, i;
    // printf("enter value of n: ");
    // scanf("%d", &n);
    // for (i = 0, a = -1, b = 1; i <= n;i++)
    // {
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }
    // printf("%d term is %d", n, c);

    // Q2
    // int a, b, fib, n;
    // printf("enter the value of n : ");
    // scanf("%d", &n);
    // a = 0, b = 1;
    // printf("fibonacci series : %d %d ",a,b);
    // for (int i = 3; i <= n; i++)
    //     {
    //         fib = a + b;
    //         a = b;
    //         b = fib;
    //         printf(" %d ",fib);
    //     }
    // Q3
    // int a, b, fib, n;
    // printf("enter the number : ");
    // scanf("%d", &n);
    // a = 0, b = 1;
    // if (n == 0 || n == 1)
    // {
    //     printf("number is in fibonacci series");
    // }
    // else
    // {
    //     for (int i = 3;; i++)
    //     {
    //         fib = a + b;
    //         a = b;
    //         b = fib;
    //         if (fib == n)
    //         {
    //             printf("number is in fibonacci series ");
    //             break;
    //         }
    //         if (fib > n)
    //         {
    //             printf("number is not in fibonacci series ");
    //             break;
    //         }
    //     }
    //}
    // Q4
    // int A=0, n, r, x, y, count;
    // printf("enter a number : ");
    // scanf("%d", &n);
    // count = 0;
    // x = n;
    // y = n;
    // while (x)
    // {
    //     r = x % 10;
    //     x = x / 10;
    //     count++;
    // }

    // while (y)
    // {
    //     r = y % 10;
    //     y = y / 10;
    //     A= A+pow(r,count);
    // }
    // if(A==n)
    // printf("number is armstrong number ");
    // else
    // printf("not an armstrong");
    // Q5
    // int A, n, r, x, y, count;
    // for (int i = 1; i <= 1000; i++)
    // {
    //     A = 0 ;
    //     count = 0;
    //     x = i;
    //     y = i;
    //     while (x)
    //     {
    //         r = x % 10;
    //         x = x / 10;
    //         count++;
    //     }

    //     while (y)
    //     {
    //         r = y % 10;
    //         y = y / 10;
    //         A = A + pow(r, count);
    //     }
    //     if (A == i)
    //         printf(" %d ", i);
    // }
}
