#include <stdio.h>

int main() {
    int n, i = 1;
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0) {
        while (i <= n) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    } else {
        printf("Factorial of a negative number doesn't exist.\n");
    }

    return 0;
}
