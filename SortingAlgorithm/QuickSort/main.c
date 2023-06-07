#include <stdio.h>

typedef int DataType;

// quick sort
int partition(DataType A[], int low, int high)
{
    int pivot = A[low];

    while (low < high)
    {
        while (low < high && A[high] >= pivot)
            --high;
        A[low] = A[high];
        while (low < high && A[low] <= pivot)
            ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(DataType A[], int low, int high)
{
    int i;
    if (low < high)
    {
        i = partition(A, low, high);
        QuickSort(A, low, i - 1);
        QuickSort(A, i + 1, high);
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

    QuickSort(A, 0, length - 1);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}