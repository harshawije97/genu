// preprocessor directives
#include <stdio.h>
#include <string.h>

int main()
{
    float number = 34.56;
    double pi = 3.14159265358979;
    int number2 = 10;

    // String
    char name[] = "Harshana Wijesinghe";
    char email[] = "harshawije99@gmail.com";
    // Single character
    char character = '1';

    printf("Number 1 init %.1f,\nNumber 2 init: %d, \n", number, number2);

    printf("Hello %s\n", name);
    printf("User Email is: %s\n", email);

    printf("Character %c\n", character);
    printf("PI number: %.10lf\n", pi);

    // Format Specifiers
    /*
    Integer = %d
    Float = %f
    Loang Float (with decimal points more than 6) = %lf
    Double = %lf
    Boolean =
    Character = %c
    String = %s
    */

    // Small Programme
    int min = 1;
    int max = 100000;

    while (min <= max)
    {
        printf("%8d\n", min);
        min = min * 10;
    }

    // Another small programme
    char storedUserName[] = "harshawije97";
    char storedPassword[] = "Aspirine@123";

    char userInputName[45];
    char userInputPassword[100];

    printf("Enter your username: ");
    scanf("%s", userInputName);
    printf("Enter your password: ");
    scanf("%s", userInputPassword);

    if (strcmp(userInputName, storedUserName) == 0 && strcmp(userInputPassword, storedPassword) == 0)
    {
        printf("Welcome %s\n", storedUserName);
    }
    else
    {
        printf("Invalid user: Check username or password");
    }

    return 0;
}
