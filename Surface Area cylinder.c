#include <stdio.h>
#define PI 3.14159

int main() {
    float r, h, surfaceArea, volume;
    printf("Enter radius and height of the cylinder: ");
    scanf("%f%f", &r, &h);

    surfaceArea = 2 * PI * r * r + 2 * PI * r * h;
    volume = PI * r * r * h;

    printf("Surface Area = %.2f\n", surfaceArea);
    printf("Volume = %.2f\n", volume);
    return 0;
}

