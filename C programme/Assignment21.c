#include <stdio.h>
// Q1
//  float Area(float);
//  int main()
//  {

//     float r, area;
//     printf("enter radius : ");
//     scanf("%f", &r);
//     area = Area(r);
//     printf("area of this circle is  %f", area);
// }
// float Area(float a)
// {
//     float c;
//     c = 3.14 * a * a;
//     return c;
// }
// Q2
// float Simple_Interest(float, float, int);
// int main()
// {
//     float p, r, SI;
//     int t;
//     printf("enter Principle , Rate of Interest ,Time :");
//     scanf("%f %f %d", &p, &r, &t);
//     SI = Simple_Interest(p, r, t);
//     printf("value of simple interest is : %f", SI);
// }
// float Simple_Interest(float a, float b, int c)
// {
//     float ans;
//     ans = (a * b * c) / 100;
//     return ans;
// }
// Q3
// int check_Even_Odd(int);
// int main()
// {
//     int num, s;
//     printf("enter a number :  ");
//     scanf("%d", &num);
//     s = check_Even_Odd(num);
//     printf("value of s = %d", s);
// }
// int check_Even_Odd(int p)
// {
//     if (p % 2 == 0)
//         return 1;
//     else
//         return 0;
// }
// Q4
// void First_N_Sum(int);
// int main()
// {
//     int N;
//     printf("enter the N: ");
//     scanf("%d", &N);
//     First_N_Sum(N);
// }
// void First_N_Sum(int a)
// {
//     int b = (a * (a + 1)) / 2;
//     printf("sum of first %d natural number : %d", a, b);
// }
// void first_ODD(int);
// int main()
// {
//     int N;
//     printf("enter the number N: ");
//     scanf("%d", &N);
//     first_ODD(N);
// }
// void first_ODD(int a)
// {
//     int sum ;
//     for (int i = 1; i <= a; i++)
//     {
//         sum = 2 * i - 1;
//         printf("%d  ", sum);
//     }
// }