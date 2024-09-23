#include <stdio.h>

int main(){
    FILE *fptr = fopen("coding.txt", "r");

    if (fptr == NULL)
    {
        printf("Error couldn't open the file");
    }
    char str[100];

    // fgets(str, sizeof(str), fptr);
    // line antha read avvali ante with space use fgets
    fscanf(fptr,"%s",str);

    printf("%s", str);

    fclose(fptr);

    return 0;
}