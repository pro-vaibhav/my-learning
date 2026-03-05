#include <stdio.h>

int main(void)
{
    int sum, d, n;
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    d = n % 10;
    sum = d;
    n = n / 10;
    d = n % 10;
    sum = sum + d;
    n = n / 10;
    d = n % 10;
    sum = sum + d;
    n = n / 10;
    d = n % 10;
    sum = sum + d;
    n = n / 10;
    sum = sum + n;
    printf("The sum of its digit is %d.", sum);
    return 0;
}