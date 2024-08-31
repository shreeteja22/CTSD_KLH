#include <stdio.h>

int main() {
    char name[50];
    int id_number;
    char gender[10];
    char department[50];
    char phone_number[15];
    float cgpa;

    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the last five digits of your ID Number: ");
    scanf("%d", &id_number);

    printf("Enter your gender: ");
    scanf("%s", gender);

    printf("Enter your Department/Branch: ");
    scanf("%s", department);

    printf("Enter your Phone Number (format 111-222-3333): ");
    scanf("%s", phone_number);

    printf("Enter your Intermediate C.G.P.A: ");
    scanf("%f", &cgpa);

    printf("\nYour Details:\n");
    printf("Name: %s", name);
    printf("ID Number (Last 5 digits): %d\n", id_number);
    printf("Gender: %s\n", gender);
    printf("Department/Branch: %s\n", department);
    printf("Phone Number: %s\n", phone_number);
    printf("Intermediate C.G.P.A: %.2f\n", cgpa);

    return 0;
}
