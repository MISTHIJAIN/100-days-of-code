//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float cel,fah;
    printf("Enter temperature in Celsius-");
    scanf("%f",&cel);
    fah= (cel*9/5)+32;
    printf("Fahrenheit= %f",fah);
    return 0;
}

