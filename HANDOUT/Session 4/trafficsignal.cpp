#include <stdio.h>

int main(){
    char signal;

    printf("Enter the Signal Type(Y/R/G) : ");

    scanf("%c", &signal);
    
    if (signal == 'Y'){
        printf("Y-Get ready to move! It's yellow signal.");
    }
    else if (signal == 'R'){
        printf("R-Stop! It's red signal.");
    }
    else if (signal == 'G'){
        printf("G-Go! It's green signal");
    }
    else{
        printf("INVALID INPUT\nChoose Only Between (Y/R/G)");
    }
    return 0;
}
