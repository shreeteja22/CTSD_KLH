#include <stdio.h>

int main() {
    int overdueDays;
    int lateFee = 0;

    // Prompt the user to enter the number of overdue days
    printf("Enter the number of days the book is overdue: ");
    scanf("%d", &overdueDays);

    // Calculate the late fee using switch-case
    switch (overdueDays) {
        case 0 ... 7:
            lateFee = 0; // No late fee for returns within 7 days
            break;
        case 8 ... 14:
            lateFee = 2 * (overdueDays - 7); // Rs. 2 per day for days 8-14
            break;
        case 15 ... 30:
            lateFee = 2 * 7 + 5 * (overdueDays - 14); // Rs. 2 for 7 days, Rs. 5 per day for days 15-30
            break;
        default:
            if (overdueDays > 30)
                lateFee = 2 * 7 + 5 * 16 + 10 * (overdueDays - 30); // Rs. 10 per day after 30 days
            break;
    }

    // Display the calculated late fee
    printf("The late fee is Rs. %d\n", lateFee);

    return 0;
}
