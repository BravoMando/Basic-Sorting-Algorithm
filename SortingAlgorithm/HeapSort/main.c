#include <stdio.h>

typedef int DataType;

// heap sort
void sift(DataType A[], int low, int high)
{
    int i = low, j = i * 2;
    DataType temp = A[i];

    while (j <= high)
    {
        if (j < high && A[j] < A[j + 1])
            ++j;
        if (temp < A[j])
        {
            A[i] = A[j];
            i = j;
            j = 2 * i;
        }
        else
            break;
    }
    A[i] = temp;
}
void HeapSort(DataType A[], int length)
{
    int i;

    for (i = length / 2; i > 0; --i)
        sift(A, i, length);
    for (i = length; i > 1; --i)
    {
        DataType temp = A[1];
        A[1] = A[i];
        A[i] = temp;

        sift(A, 1, i - 1);
    }
}

int main(int argc, const char *argv[])
{
    DataType A[10] = {0xffff, 3, 2, 5, 1, 9, 6, 0, 4, 7};
    int length = 10;

    printf("Before sorting: \n");
    for (int i = 1; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    HeapSort(A, length - 1);

    printf("After sorting: \n");
    for (int i = 1; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}