#include <stdio.h>
void printEvenReverse(int n)
{
    if (n > 0)
    {
        printf(" %d", 2 * n);
        printEvenReverse(n - 1);
    }
}
void printSquare(int n)
{
    if (n > 0)
    {
        printSquare(n - 1);
        printf(" %d", n * n);
    }
}


void decimalToBinary(int num){
    if(num){
        decimalToBinary(num/2);
        printf("%d",num%2);
    }
}

void decimalToOctal(int num){
    if(num){
        decimalToOctal(num/8);
        printf("%d",num%8);
    }
}
void printReverse(int x){
if(x){
    printf("%d",x%10);
    printReverse(x/10);
}
}
int main()
{
    //printEvenReverse(10);
    // printSquare(10);
    // decimalToBinary(25);
    // printReverse(1256);
}

