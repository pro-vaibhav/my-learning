#include <stdio.h>

int main(void)
{
    int c, sst, s, m, e, percentage;
    printf("Enter the marks obtained in maths: ");
    scanf("%d", m);
    printf("Enter the marks obtained in science: ");
    scanf("%d", s);
    printf("Enter the marks abtained in english: ");
    scanf("%d", e);
    printf("Enter the marks obtained in sst: ");
    scanf("%d", sst);
    printf("Enter the marks obtained in computer: ");
    scanf("%d", c);
    percentage = c + sst + m + s + e / 500 * 100;
    return 0;
}