// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r;
    const float pi = 3.14159; // Defined as a constant variable

    printf("Enter radius- ");
    scanf("%f", &r);

    float area = pi * r * r;
    float circumference = 2 * pi * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
