#include <stdio.h>
int main()
{
    // int i=0, count = 0;
    // char str[10] = "BHOPAL";
    // while (str[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("length of this string is : %d", count);

    char str[20];
    int i;
    printf("enter your name : ");
    // for(i=0;str[i];i++){
    //     scanf("%c",&str[i]);
    // }
    // gets(str);
     fgets(str,10,stdin);

    
    


    printf("hello,%s",str);
}