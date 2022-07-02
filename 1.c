//  C program to demonstrate example of floor and ceil functions.

#include <stdio.h>
#include <math.h>
int main()
{
    float value;
    float floorValue, ceilValue;
    printf("Enter a float value: ");
    scanf("%f", &value);
    floorValue = floor(value);
    ceilValue = ceil(value);
    printf("floor value:%f \nceil value:%f\n", floorValue, ceilValue);
    return 0;
}