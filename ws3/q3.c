#include <stdio.h>

int linearSearch(int[], int, int);

int main()
{
    int i;
    int len, val, freq; /* length, target, frequency */
    int arr[] = {9, 4, 7, 10, 23, 4, 9, 78, 9, 23, 4};   /* example array */

    printf("[Search a number in array and the frequency using linear search]\n\n");
    len = sizeof(arr)/sizeof(arr[0]);

    printf("The array: ["); /* printing the array */
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]");

    printf("\nEnter target value: ");
    scanf("%d", &val);

    ((freq = linearSearch(arr, len, val)) != -1)
    ? printf("\n%d appears %d times in the array", val, freq)
    : printf("\n%d doesn't exist in the array", val);
    return 0;
}

int linearSearch(int arr[], int len, int val)
{
    int freq;

    freq = 0;
    while(--len >= 0)
        if(arr[len] == val)
            ++freq;
    return (freq != 0) ? freq : -1;
}
