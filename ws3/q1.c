#include <stdio.h>
#define MAXSIZE 20

int main()
{
    int i, n, arr[MAXSIZE];
    int pos, neg, even, odd;

    printf("[Count positive, negative, even and odd numbers in an array]\n\n");
    while(1)
    {
        printf("Enter array size: ");
        scanf("%d", &n);

        if(n <= MAXSIZE)
            break;
        else
            printf("Error: maximum allowed size is %d!\n\n", MAXSIZE);
    }

    pos = neg = even = odd = 0;
    for(i = 0; i < n; i++)
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            ++pos;
        else if(arr[i] < 0)
            ++neg;

        if(arr[i]%2 == 0)
            ++even;
        else
            ++odd;
    }

    printf("\nPositive number = %d\nNegative number = %d"
           "\nEven number = %d\nOdd number = %d\n", pos, neg, even, odd);
    return 0;
}
