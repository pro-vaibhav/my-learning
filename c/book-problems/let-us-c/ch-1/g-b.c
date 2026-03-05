#include <stdio.h>

int main(void)
{
    float kilometer, meter;
    printf("Enter the distance ");
    scanf("%f", &kilometer);
    meter = kilometer * 1000.0f;
    printf("The distance in meter is:%1.2f", meter);
}