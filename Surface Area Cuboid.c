#include <stdio.h>

int main() {
    float l, b, h, volume, surfaceArea;
    printf("Enter length, breadth, and height of cuboid: ");
    scanf("%f%f%f", &l, &b, &h);

    volume = l * b * h;
    surfaceArea = 2 * (l*b + l*h + b*h);

    printf("Volume = %.2f\n", volume);
    printf("Total Surface Area = %.2f\n", surfaceArea);
    return 0;
}

