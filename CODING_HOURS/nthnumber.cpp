#include <stdio.h>

int main(){
    int n;

    printf("Enter the size of an array in numbers: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Values in reverse order:\n");

    for (int i = n - 1; i >= 0; --i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
