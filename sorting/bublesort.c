#include <stdio.h>
#include <stdlib.h>

void bublesortAdaptive(int *arr, int n)
{
    int i, isSorted = 0, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        printf("PASS %d\n", i + 1);
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted == 1)
        {
            return;
        }
    }
}

void bublesort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {

        printf("PASS %d\n", i + 1);
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    printf("Enter size of array:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("enter elements of array:");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    bublesortAdaptive(arr, n);
    printf("soreted array:");
    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
