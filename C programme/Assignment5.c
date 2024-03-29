#include<stdio.h>
int main(){
//Q1
/*int x,a,b,c;
printf("enter a  three digit  number : ");
scanf("%d",&x);
a=x%10;
x/=10;
b=x%10;
x/=10;
c=x%10;
x/=10;
printf(" sum of digits : %d",a+b+c);
*/
//Q2
//printf("ASCII value of \'+\'  : %d",'+');


//Q3
/*int a;
float b;
char c;
double d;
printf("size  of int var :   %d \n",sizeof(a));
printf("size  of float var:  %d \n",sizeof(b));
printf("size  of char var:   %d \n",sizeof(c));
printf("size  of double var: %d ",sizeof(d));
*/
//Q4
/*int num;

printf("enter a number : ");
scanf("%d",&num);
num=(num/10)*10;
printf("new number is : %d",num);
*/
int num,digit;
printf("enter a number : ");
scanf("%d",&num);

printf("enter a digit : ");
scanf("%d",&digit);

num=(num*10)+digit;
printf("new number is : %d",num);



}
