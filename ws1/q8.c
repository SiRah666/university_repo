#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s;

    printf("[Calculate area of a triangle]\n\n");
    printf("Enter length of side a: ");
    scanf("%f", &a);
    printf("Enter length of side b: ");
    scanf("%f", &b);
    printf("Enter length of side c: ");
    scanf("%f", &c);

    s = (a + b + c)/2;
    printf("The area of the triangle: %.3f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}
