// preprocessor directives
#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[150] = "";
    float gpa = 0.0f;
    char grade;

    printf("Enter your full name:");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter your GPA:");
    scanf("%.2f", &gpa);

    printf("Enter your DSA grade:");
    scanf("%c", &grade);

    // Output
    printf("####============####\n");
    printf("Full Name: %s\n", fullName);
    printf("GPA: %.1f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("####============####");

    return 0;
}
