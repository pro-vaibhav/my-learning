#include<stdio.h>

int factorial(int number)
{
    
    return (number* factorial(number -1));
}

int main(void)
{
    printf("%d", factorial(5));
}