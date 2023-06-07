#include <stdio.h>

typedef int DataType;

// shell sort
void ShellSort(DataType A[], int length)
{
    int i, j, d;
    DataType temp;

    for (d = length / 2; /* d >= 1 */ d > 0; d /= 2)
    {
        for (i = d; i < length; ++i)
        {
            if (A[i] < A[i - d])
            {
                temp = A[i];
                for (j = i - d; j >= 0 && A[j] > temp; j -= d)
                    A[j + d] = A[j];
                A[j + d] = temp;
            }
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

    ShellSort(A, length);

    printf("After sorting: \n");
    for (int i = 0; i < length; ++i)
    {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}