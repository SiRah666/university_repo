#include <stdio.h>

int removeElement(int[], int, int);
int binarySearch(int[], int, int, int);

int main()
{
    int i;
    int len, val, pos, freq; /* length, target, frequency */
    int arr[] = {2, 4, 4, 5, 7, 7, 7, 9, 13, 13, 13, 13, 17, 21};   /* example array */

    printf("[Search a number in array and the frequency using binary search]\n\n");
    len = sizeof(arr)/sizeof(arr[0]);

    printf("The array: ["); /* printing the array */
    for(i = 0; i < len; i++)
        printf(" %d ", arr[i]);
    printf("]");

    printf("\nEnter target value: ");
    scanf("%d", &val);

    freq = 0;
    while((pos = binarySearch(arr, 0, len-1, val)) != -1)
    {
        ++freq;
        len = removeElement(arr, len, pos);
    }

    (freq != 0)
    ? printf("\n%d appears %d times in the array", val, freq)
    : printf("%d doesn't exist in the array", val);
    return 0;
}

int removeElement(int arr[], int len, int pos)
{
    int i;

    for(i = pos; i < len-1; i++)
        arr[i] = arr[i+1];
    return --len;
}

int binarySearch(int arr[], int l, int u, int val)
{
    int m;

    while(l <= u)
    {
        m = (l+u) / 2;
        if(arr[m] == val)
            return m;
        else if(arr[m] < val)
            return binarySearch(arr, m+1, u, val);
        else
            return binarySearch(arr, l, m-1, val);
    }

    return -1;
}
