#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number between (1 to 9): ");

    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Invalid input! Please enter a digit between 1 and 9.\n");
    }
    return 0;
}