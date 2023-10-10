#include <stdio.h>

int recursiveFactorial(int);
int nonRecursiveFactorial(int);

int main()
{
    int n;

    printf("[Find factorial of n through recursive and non-recursive func]\n\n");
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The factorial(recursive) of %d: %d\n", n, recursiveFactorial(n));
    printf("The factorial(non-recursive) of %d: %d", n, nonRecursiveFactorial(n));
    return 0;
}

int recursiveFactorial(int n)
{
    if(n == 0)
        return 1;
    return n * recursiveFactorial(n-1);
}

int nonRecursiveFactorial(int n)
{
    int res;

    res = 1;
    for(;n > 1; --n)
        res *= n;
    return res;
}
