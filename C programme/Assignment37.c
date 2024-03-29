#include <stdio.h>
#include <string.h>
int countVowel(char str[])
{
    char v[] = "aeiouAEIOU";
    int i, j, count = 0;
    for (i = 0; str[i]; i++)
    {
        for (j = 0; str[j]; j++)
        {
            if (str[i] == v[j])
                count++;
            break;
        }
    }
    return count;
}

int findCharacter(char str[], char ch)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
            return i;
    }
    return -1;
}
int findCharacterBetweenIndice(char str[], char ch, int startIndex, int endIndex)
{
    int i;
    for (i = startIndex; str[i] && endIndex; i++)
    {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

void swapCharacters(char str[], int i, int j)
{
    char ch;
    ch = str[i];
    str[i] = str[j];
    str[j] = ch;
    printf("%s", str);
}

int isAlphaNumeric(char str[])
{
    int i, alpha = 0, digit = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = 1;
        if (str[i] >= 'a' && str[i] <= 'z')
            alpha = 1;
        if (str[i] >= 'A' && str[i] <= 'Z')
            alpha = 1;
    }
    if (alpha && digit)
        return 1;
    else
        return 0;
}
int main()
{
}