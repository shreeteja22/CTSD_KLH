#include <stdio.h>

int main(){

    int num,rem,rev = 0,palnum;

    printf("Enter the number you want to reverse it: ");

    scanf("%d",&num);

    palnum = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    if (palnum == rev) {
        printf("%d is a palindrome.\n", palnum);
    } 
    else {
        printf("%d is not a palindrome.\n", palnum);
    }
    printf("The Reversed number is %d\n",rev);
    
    return 0;
}