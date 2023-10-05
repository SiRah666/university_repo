#include <stdio.h>

int recursiveAdd(int);

int main()
{
    int n;

    printf("[Calculate sum of even or odd up to n]\n\n");
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The sum: %d", recursiveAdd(n));
    return 0;
}

int recursiveAdd(int n)
{
    if(n <= 0)
        return 0;
    return (n + recursiveAdd(n-2));
}
