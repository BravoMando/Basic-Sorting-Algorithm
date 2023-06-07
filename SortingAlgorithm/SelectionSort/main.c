#include <stdio.h>

typedef int DataType;

// select sort
void SelectSort(DataType A[], int length)
{
    int i, j, min_idx;

    for (i = 0; i < length - 1; ++i)
    {
        min_idx = i;
        for (j = i + 1; j < length; ++j)
        {
            if (A[j] < A[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            DataType temp = A[i];
            A[i] = A[min_idx];
            A[min_idx] = temp;
        }
    }
}

int main(int argc, const char *argv[])
{
    DataType A[9] = {3, 2, 5, 1, 9, 6, 0, 4, 7};
    int length = 9;

    printf("Before sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    SelectSort(A, length);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}