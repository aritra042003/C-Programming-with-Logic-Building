#include <stdio.h>
#include <string.h>
void swap_string(char s1[], char s2[])
{
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

void sort(int *ptr, int size)
{
    int r, i, t;
    for (r = 1; r < size; r++)
    {
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (ptr[i] > ptr[i + 1])
            {
                t = ptr[i];
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = t;
            }
        }
    }
}
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
    }
    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
int f4(int A[], int size)
{
    int left, right, loc, temp;
    left = 0;
    right = size - 1;
    loc = 0;
    while (left < right)
    {
        while (left < right && A[loc] < A[right])
        {
            right--;
        }
        if (left == right)
            break;
        temp = A[right];
        A[right] = A[loc];
        A[loc] = temp;
        loc = right;

        while (left < right && A[left] < A[loc])
        {
            left++;
        }
        if (left == right)
            break;
        temp = A[left];
        A[left] = A[loc];
        A[loc] = temp;
        loc = left;
    }
    return loc;
}
int highestMarks(int **p, int no_of_studetns[], int no_of_classes)
{
    int max, i, j;
    max = p[0][0];
    for (i = 0; i < no_of_classes; i++)
    {
        for (j = 0; j < no_of_studetns[i]; j++)
        {
            if (max < p[i][j])
                max = p[i][j];
        }
    }
    return max;
}
int main()
{
}