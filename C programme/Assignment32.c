#include <stdio.h>

// void swapArrayElement(int b[], int size)
// {
//     int m, n, c;
//     scanf("%d %d", &m, &n);
//     if (m <= size && n <= size && m != n)
//     {
//         c = b[m];
//         b[m] = b[n];
//         b[n] = c;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", b[i]);
//     }
// }

// int findDuplicate(int b[], int size)
// {
//     int i, j, count = 0;
//     for (i = 0; i < size; i++)
//     {
//         for (j = i+1; j < size; j++)
//         {
//             if (b[i] == b[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     return count;
// }

void printUniqueElement(int b[], int size)
{
    int i, j, count = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (b[i] == b[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%d", b[i]);
        count = 0;
    }
}
void printOccurrence(int b[], int size)
{
    int i, j, count = 1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
        printf("occurrence of no %d element %d \n", i, count);
        count=1;
    }
}
int main()
{
    int a[] = {1, 2, 2, 4, 5, 4};
    // swapArrayElement(a, 6);
    // int duplicate=findDuplicate(a,6);
    // printf("%d",duplicate);
    // printUniqueElement(a, 6);
    printOccurrence(a,6);
}