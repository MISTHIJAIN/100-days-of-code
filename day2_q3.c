// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float l, b;

    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);

    float area = l * b;
    float perimeter = 2 * (l + b);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
