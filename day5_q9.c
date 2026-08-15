// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, sim, com;

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period: ");
    scanf("%f", &t);

    // Calculate simple interest
    sim = (p * r * t) / 100;

    // Calculate compound interest
    com = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", sim, com);

    return 0;
}
