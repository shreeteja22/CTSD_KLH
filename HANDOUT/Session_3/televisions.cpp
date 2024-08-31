#include <stdio.h>

int main() {

    int t_channels, working_channels;

    printf("Enter the total number of channels: ");

    scanf("%d", &t_channels);
    
    working_channels = (t_channels + 1) / 2;

    printf("The total number of working channels is %d\n", working_channels);

    return 0;
}
