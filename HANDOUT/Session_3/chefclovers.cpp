#include <stdio.h>

int main() {
    int N;  
    
    int totalLeaves;

    printf("Enter the total number of clovers: ");

    scanf("%d", &N);

    totalLeaves = 4 + 3 * (N - 1);

    printf("Chef collected a total of %d leaves.\n", totalLeaves);

    return 0;
}
