#include <stdio.h>
// Q1
// int LCM(int, int);
//  int main()
//  {
//
//      int L, a, b;
//      printf("enter two numbers : ");
//      scanf("%d %d", &a, &b);
//      L = LCM(a, b);
//      printf("LCM is %d", L);
//  }
//  int LCM(int p, int q)
//  {
//      int r;
//      for (r = p > q ? p : q; r <= p * q; r++)
//      {
//          if (r % p == 0 && r % q == 0)
//          {
//              break;
//          }
//      }
//      return r;
//  }
// Q2
// int HCF(int, int);
// int main()
// {
//     int a, b, H;
//     printf("enter  two numbers : ");
//     scanf("%d %d", &a, &b);
//     H = HCF(a, b);
//     printf("HCF is %d ", H);
// }
// int HCF(int p, int q)
// {
//     int r;
//     for (r = p < q ? p : q; r >= 1; r--)
//     {
//         if (p % r == 0 && q % r == 0)
//             break;
//     }
//     return r;
// }

// Q3
// int Prime(int);
// int main()
// {
//     int x, a;
//     printf("enter a number : ");
//     scanf("%d", &x);
//     a = Prime(x);
//     if (a == 1)
//         printf("number is prime");
//     else
//         printf("number is not prime");
// }
// int Prime(int p)
// {
//     int i;
//     for (i = 2; i < p; i++)
//         if (p % i == 0)
//             break;
//     if (i == p)
//         return 1;
//     else
//         return 0;
// }

// Q4
// int next_Prime(int);
// int main()
// {
//     int n1, b, count;
//     printf("enter the number : ");
//     scanf("%d", &n1);
//     b = next_Prime(n1);
//     printf("next prime of %d is %d ", n1, b);
// }
// int next_Prime(int a)
// {
//     int count = 0;
//     for (int i = a; i > 0; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//         {
//             return i;
//         }
//         count = 0;
//     }
// }
//Q5
// void first_N_Prime(int );
// int main(){
// int n;
// printf("enter the n: ");
// scanf("%d",&n);
// printf("first %d prime numbers:  ",n);
// first_N_Prime(n);   
// }
// void first_N_Prime(int p){
//     int i,x,count=0;
//      for (x = 2; x >=1; x++)
//     {
//         for (i = 2; i < x; i++)
//             if (x % i == 0)
//                 break;
//         if (i == x){
//             count++;
//             printf(" %d ", x);
            
//         }
//      if (count==p)
//             break;
//     }
// }