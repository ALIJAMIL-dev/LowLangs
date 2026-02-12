#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Hello World
    printf("Hello World!");
    // Vars
    // Int
    int age = 13;
    printf("\nI'm approximately %d years old", age);
    // Float
    float gpa = 4.0;
    float price = 19.99;
    float temp = -1.5;
    printf("\nThe max gpa is %.1f", gpa);
    printf("\nThe price of Blood ESPORTS mouse is $%.2f", price);
    printf("\nThe average temp outside is %.1f°C", temp);
    // Double
    double pi = 3.1415926535;
    double e = 2.71828;
    printf("\nThe Pi is (10 digits if you want more go to https://www.piday.org/million/) %.15lf", pi);
    printf("\nThe e is: %.5lf", e);
    // Char
    char grade = 'A';
    char powerUp = '^';
    printf("\nYour grade is: %c", grade);
    printf("\n Python is so stupid, it uses ** for power up instead of %c", powerUp);
    // Strings (Char arrays)
    char name[] = "Ali";
    printf("\nMy name is %s", name);
    // Booleans
    bool isOnline = true; // true = 1, false = 0

    if (isOnline)
    {
        printf("you aren't online");
    }
    else
    {
        printf("you are online");
    }

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char [] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    return 0;
}