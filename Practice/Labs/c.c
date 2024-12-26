#include <stdio.h>

int main(){
    int a = 40;        // 5 in binary is 0000 0101
    int result = a >> 3; // Shifts 5 to the left by 2 bits

    // Binary representation of 5:     0000 0101
    // After shifting 2 bits to left:  0001 0100  (which is 20 in decimal)

    printf("%d\n", result);

    return 0;
}