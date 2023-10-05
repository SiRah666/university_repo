#include <stdio.h>

void insertionSort(int[], int);

int main()
{
    int i, len;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};   /* example array */

    printf("[Sort the array using Insertion Sort]\n\n");
    len = sizeof(arr)/sizeof(arr[0]);
    printf("The Unsorted Array: [");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]\n");

    insertionSort(arr, len);

    printf("The Sorted Array: [");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]\n");
    return 0;
}

void insertionSort(int arr[], int len)
{
    int i;
    int index; /* index of where to insert */
    int val; /* value to insert */

    for(i = 0; i < len; i++)
    {
        val = arr[i];

        for(index = i; index > 0 && arr[index-1] > val; --index)
            arr[index] = arr[index-1];  /* move predecessor one position up */
        arr[index] = val;
    }
}
