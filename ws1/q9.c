#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, phi;

    printf("[Convert Cartesian co-ordinates into Polar co-ordinates]\n\n");
    printf("Enter the x co-ordinate: ");
    scanf("%f", &x);
    printf("Enter the y co-ordinate: ");
    scanf("%f", &y);

    r = sqrt((x*x) + (y*y));
    phi = atan2(y, x);
    printf("The polar co-ordinates: (%.3f, %.3f)\n", r, phi);
    return 0;
}
