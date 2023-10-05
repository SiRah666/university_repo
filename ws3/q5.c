#include <stdio.h>

void selectionSort(int[], int);

int main()
{
    int i, size;
    int arr[] = {64, 25, 12, 22, 11, 83, 77};   /* example array */

    printf("[Sort an array using Selection Sort]\n\n");
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The Unsorted Array: [");
    for(i = 0; i < size; i++)
        printf(" %d ", arr[i]);
    printf("]\n");

    selectionSort(arr, size);

    printf("The Sorted Array: [");
    for(i = 0; i < size; i++)
        printf(" %d ", arr[i]);
    printf("]\n");
    return 0;
}

void selectionSort(int arr[], int len)
{
    int i, j;
    int min;
    int temp;

    for(i = 0; i < len-1; i++)
    {
        min = i;
        for(j = i+1; j < len; j++)
            if(arr[j] < arr[min])
                min = j;

        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
