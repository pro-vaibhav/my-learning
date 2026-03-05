#include<stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the first number : ");
    scanf("%d",a);
    printf("Enter the second number :");
    scanf("%d",b);
    c=a;
    a=b;
    b=c;
    printf("The number we get after swaping is :%d",a,b);
    return 0;
}