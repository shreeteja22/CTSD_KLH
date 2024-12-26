#include <stdio.h>

void convertToBinary(int num) {
    int stack[32], top = -1;

    while (num > 0) {
        stack[++top] = num % 2;
        num /= 2;
    }

    printf("Binary Representation: ");
    while (top >= 0) {
        printf("%d", stack[top--]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d",&num);
    convertToBinary(num);
    return 0;
}
