#include <stdio.h>
int main()
{
    // Q1
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);
    switch (marks)
    {
    case  90 ...100:
        printf("grade A");
        break;
    case 80 ...89:
        printf("grade B");
        break;
    case 70 ... 79:
        printf("grade C");
        break;
    case 60 ... 69:
        printf("grade D");
        break;
    case 50 ...59:
        printf("grade E");
        break;
    case 40 ... 49:
        printf("grade f");
        break;
    default:
        printf("invalid ");
        break;
    }
}