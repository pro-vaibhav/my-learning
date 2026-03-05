#include <stdio.h>

int main(void)
{
    int a;
    
    printf("Press 1 for surprise 1\n");
    printf("Press 2 for surprise 2\n");
    printf("Press 3 for surprise 3\n");
    printf("Press 4 for surprise 4\n");
    printf("Press 5 for surprise 5\n");
    printf("Enter your choice: ");
    
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("You are a donkey!!!!!\n");
            break;
        case 2:
            printf("You are a bad girl!!!\n");
            break;
        case 3:
            printf("You are a stupid girl or boy.\n");
            break;
        case 4:m
            printf("You are a naughty girl or boy.\n");
            break;
        case 5:
            printf("You are a foolish person!!!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }
    
    return 0;
}
