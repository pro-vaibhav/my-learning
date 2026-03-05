#include <stdio.h>

int main(int argc, char const *argv[])
{
    float bs, da, hra, gs;
    printf("Enter the basic salary: ");
    scanf("%f", &bs);
    da = bs * 40.0f / 100.0f;
    hra = bs * 20.0f / 100.0f;
    gs = bs + da + hra;
    printf("The gross salary is: %1.2f", gs);
    return 0;
}
