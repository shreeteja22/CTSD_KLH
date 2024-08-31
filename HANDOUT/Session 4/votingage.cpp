#include <stdio.h>

int main() {
    int age;

    printf("Enter your age : ");

    scanf("%d", &age);

    if (age < 18) {
        printf("You are not eligible to vote\n");
    } 
    else if (age >= 18) {
        printf("You are elgible to vote.\n");
    } 
    else {
        printf("INVALID INPUT\nWrite your age to check eligibility\n");
    }

    return 0;
}
