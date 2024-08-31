#include <stdio.h>

int main() {
    int N;  
    
    int total_rounds;

    printf("Enter the total number of rounds: ");

    scanf("%d", &N);

    total_rounds = N / 12;

    printf("Chef did a total of %d rounds.\n", total_rounds);

    return 0;
}
