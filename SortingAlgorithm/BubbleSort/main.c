#include <stdio.h>

typedef int DataType;

// bubble sort
void BubbleSort(DataType A[], int length)
{
    int i, j;
    DataType temp;

    for (i = 0; i < length - 1; ++i)
    {
        int flag = 0;
        for (j = length - 1; j > i; --j)
        {
            if (A[j] < A[j - 1])
            {
                temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            return;
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

    BubbleSort(A, length);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}