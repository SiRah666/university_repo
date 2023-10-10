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
    double term;

    if(n == 10)
        return 0;
    term = pow(-1, n) * pow(x, 2*n+1)/factorial(2*n+1);
    return term + findSin(x, n+1);
}

<<<<<<< HEAD
int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n-1);
}
=======
double factorial(double n) {
    if(n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}
>>>>>>> f74ca38facc5a66f123fe3c91409434245de8873
