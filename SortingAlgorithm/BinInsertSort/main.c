#include <stdio.h>

typedef int DataType;

// binary insertion sort
void BinInsertSort(DataType A[], int length)
{
    int i, j, low, high, mid;
    DataType temp;

    for (i = 1; i < length; ++i)
    {
        temp = A[i];
        low = 0;
        high = i - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;
            if (A[mid] > temp)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        for (j = i - 1; j >= low; --j)
            A[j + 1] = A[j];
        A[low] = temp;
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

    BinInsertSort(A, length);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}