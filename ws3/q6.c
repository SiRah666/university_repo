#include <stdio.h>

void bubbleSort(int[], int);

int main()
{
    int i, len;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    printf("[Sort the array using Bubble Sort]\n\n");
    len = sizeof(arr)/sizeof(arr[0]);
    printf("The Unsorted Array: [");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]\n");

    bubbleSort(arr, len);

    printf("The Sorted Array: [");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]\n");
    return 0;
}

void bubbleSort(int arr[], int len)
{
    int i, j, temp, swapped;

    for(i = 0; i < len-1; i++)
    {
        swapped = 0;
        for(j = 0; j < len-1; j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }

        if(!swapped)    /* break if no elements were swapped */
            break;
    }
}
