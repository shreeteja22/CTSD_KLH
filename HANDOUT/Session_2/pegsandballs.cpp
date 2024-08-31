#include <stdio.h>

int moveBall(int ball, char fromPeg, char toPeg) {
    printf("Move Ball %d from Peg %c to Peg %c\n", ball, fromPeg, toPeg);
    return 1;
}

int main() {
    printf("Initial State:\nBall 20 on Peg A\nBall 10 on Peg B\nPeg C is empty\n\n");

    moveBall(10, 'B', 'C');
    moveBall(20, 'A', 'B');
    moveBall(10, 'C', 'A');

    printf("\nFinal State:\nBall 20 on Peg B\nBall 10 on Peg A\nPeg C is empty\n");

    return 0;
}
