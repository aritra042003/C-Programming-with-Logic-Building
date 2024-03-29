#include <stdio.h>
#include <math.h>
#include "Assignment22.c"
// Q1
//  void prime_range(int ,int );
//  int main(){
//      int  a, b;
//      printf("enter the given range : ");
//      scanf("%d %d", &a, &b);
//      printf("prime numbers between %d to %d is : ",a,b);
//      prime_range(a,b);

// }
// void prime_range(int p,int q){
//     int i ,x;
// for (int x = p + 1; x < q; x++)

//     {
//         for (i = 2; i < x; i++)
//             if (x % i == 0)
//                 break;
//         if (i == x)
//             printf("%d ", x);
//     }
// }
// q2
// void first_N_Fibo(int);
// int main()
// {
//     int a, b, fib, n;
//     printf("enter the value of n : ");
//     scanf("%d", &n);
//     first_N_Fibo(n);
// }
// void first_N_Fibo(int p)
// {
//     int i, a, b, fib;
//     a = -1, b = 1;
//     printf("fibonacci series : ");
//     for (int i =1; i <= p; i++)
//     {
//         fib = a + b;
//         a = b;
//         b = fib;
//         printf(" %d ", fib);
//     }
// }

// Q3

// void printPascal(int lines)
// {
//     int i, j, flag,n,r;
//     for (i = 1; i <=lines; i++)
//     {
//         flag = 1;
//         n=i-1;
//         for (j = 1,r=0; j <= 2*lines-1; j++)
//         {
//             if (j >= lines+1 - i && j <= lines-1 + i)
//             {
//                 if (flag)
//                     printf("%d",Combination(n,r++));
//                 else
//                     printf(" ");
//             flag=1-flag;
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

// int main()
// {printPascal(5);
// }

//Q4

// void range_Armstrong(int ,int);
// int main(){
//     int a,b;
//     printf("enter the range value : ");
//     scanf("%d %d",&a,&b);
//     printf("armstrong number between %d and %d : ",a,b);
//     range_Armstrong(a,b);

// }
// void range_Armstrong(int p,int q){
//  int A, n, r, x, y, count;
//     for (int i = p+1; i <q; i++)
//     {
//         A = 0 ;
//         count = 0;
//         x = i;
//         y = i;
//         while (x)
//         {
//             r = x % 10;
//             x = x / 10;
//             count++;
//         }

//         while (y)
//         {
//             r = y % 10;
//             y = y / 10;
//             A = A + pow(r, count);
//         }
//         if (A == i)
//             printf(" %d ", i);
//     }
// }

//Q5
// int calculateSum(int n)
// {
// int i,sum=0;
// for(i=1;i<=n;i++){
//     sum=sum+factorial(i)/i;
// }
// return sum;
// }
// int main()
// {
// int ans=calculateSum(3);
// printf("%d",ans);
// }