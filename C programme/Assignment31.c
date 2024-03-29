#include <stdio.h>
int findGreatest(int b[])
{
    int i, max;

    max = b[0];

    for (i = 1; i < 10; i++)
    {
        if (max < b[i])
        {
            max = b[i];
        }
    }
    return max;
}

int findMinimum(int b[])
{
    int i, min;

    min = b[0];

    for (i = 1; i < 10; i++)
    {
        if (min > b[i])
        {
            min = b[i];
        }
    }
    return min;
}

void printSort(int b[], int size)
{
    int i;
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int c = b[j + 1];
                b[j + 1] = b[j];
                b[j] = c;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", b[i]);
    }
}
void rotateArray(int A[], int size, int n, int d)
{
    int t, i;
    if (d > 0)
    {
        while (n)
        {
            t = A[size - 1];
            for (i = size - 1; i > 0; i--)
                A[i] = A[i - 1];
            A[0] = t;
            n--;
        }
    }
    else
    {
        while (n)
        {
            t = A[0];
            for (i = 0; i < size - 1; i++)
                A[i] = A[i + 1];
            A[size - 1] = t;
            n--;
        }
    }

    for (i = 0; i < size; i++)
        printf(" %d ", A[i]);
}
int adjacentDuplicate(int A[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (A[i] == A[i + 1])
            return A[i];
    }
    return -1;
}
int main()
{
    int a[10];
    int n, c[n];
    printf("enter the size of the array: ");
    scanf("%d", &n);
    // Reading values into the array
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }
    // printSort(c, n);
    // rotateArray(c, n, 2,-1);
    // int adj=adjacentDuplicate(c,n);
    // printf("%d",adj);
    // int maximum = findGreatest(a);
    // int minimum = findMinimum(a);

    // printf(" %d %d ", maximum,minimum);
}