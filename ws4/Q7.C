#include <stdio.h>
#include <math.h>

double findSin(double, int);
double factorial(double);

int main() {
    double x;

    printf("Enter angle(radians): ");
    scanf("%lf", &x);
    printf("sin(%.3lf) = %lf\n", x, findSin(x, 10));
    return 0;
}

double findSin(double x, int n) {
    int i;
    double res;

    res = 0.0;
    for(i = 0; i < n; ++i)
        res += pow(-1, n) * pow(x, 2*n+1)/factorial(2*n+1);
    return res;
}

double factorial(double n) {
    if(n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}
