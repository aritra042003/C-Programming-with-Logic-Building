#include <stdio.h>
void f1()
{
    char str[50];
    int i;
    printf("enter a string : ");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        ;
    str[i - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("%s", str);
}

void f2()
{
    char str[50], ch;
    int i, l;
    printf("enter a string : ");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        ;
    str[i - 1] = '\0';
    l = i - 1;
    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
    printf("%s", str);
}

void f3()
{
    char str[50], ch;
    int i, count_alpha = 0, count_digit = 0, count_special = 0;
    printf("enter a string : ");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        ;
    str[i - 1] = '\0';

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            count_digit++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            count_alpha++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            count_alpha++;
        else
            count_special++;
    }
    printf("total digits: %d\n", count_digit);
    printf("total alpha: %d\n", count_alpha);
    printf("total special: %d", count_special);
}
void f4()
{
    char str[50], s[50];
    int i;
    printf("enter a string : ");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        ;
    str[i - 1] = '\0';
    for (i = 0; str[i]; i++)
        s[i] = str[i];
    s[i] = '\0';
    printf("%s", s);
}

void f5()
{
    char str[50], ch;
    int i;
    printf("enter a string : ");
    fgets(str, 50, stdin);
    for (i = 0; str[i]; i++)
        ;
    str[i - 1] = '\0';
    printf("enter a chracter : ");
    fflush(stdin);
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
            break;
    }
    if (str[i])
        printf("%c is found at index %d", ch, i);
    else
        printf("%c is  not found ", ch);
}
int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
    f5();
}