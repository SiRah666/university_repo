#include <stdio.h>

int main()
{
    int i, len, temp;
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 7, 10, 9};    /* example array */

    printf("[Interchange even and odd numbers of array]\n\n");
    len = sizeof(arr)/sizeof(arr[0]);

    printf("Array before interchanging\n[");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]\n");

    for(i = 0; i < len; i++)
        if(((arr[i]%2!=0)&&(arr[i+1]%2==0)) || ((arr[i]%2==0)&&(arr[i+1]%2!=0)))
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

    printf("Array after interchanging\n[");
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]");
    return 0;
}
