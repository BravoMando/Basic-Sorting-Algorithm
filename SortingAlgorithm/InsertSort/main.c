#include <stdio.h>

typedef int DataType;

// straight insertion sort
void InsertSort(DataType A[], int length)
{
    int i, j;
    DataType temp;

    for (i = 1; i < length; ++i)
    {
        if (A[i] < A[i - 1])
        {
            temp = A[i];
            for (j = i - 1; j >= 0 && A[j] > temp; --j)
                A[j + 1] = A[j];
            A[j + 1] = temp;
        }
    }
}

int main(int argc, const char *argv[])
{
    DataType A[8] = {3, 2, 5, 1, 9, 6, 0, 4};
    int length = 8;

    printf("Before sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    InsertSort(A, length);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}