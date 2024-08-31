#include <stdio.h>

int main(){
    int A ;
    printf("Enter the number : ");
    scanf("%d",A);
    if (A % 2 == 0 && A % 7 == 0){
        printf("Alice takes the number home\n");
    }
    else if (A % 2 !=0 && A % 9 == 0){
        printf("Bob takes the number home\n");
    }
    else{
        printf("Charlie takes the number home\n");
    }
    return 0;
}

