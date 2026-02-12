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
    printf("\nPython is so stupid, it uses ** for power up instead of %c", powerUp);
    // Strings (Char arrays)
    char name[] = "Ali";
    printf("\nMy name is %s", name);
    // Booleans
    bool isOnline = true; // true = 1, false = 0

    if (isOnline)
    {
        printf("\nyou aren't online");
    }
    else
    {
        printf("\nyou are online");
    }
    /*
    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char [] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
    */

    // Format Modifiers
    int v0 = 13;
    float v1 = 20.99;
    double v2 = 3.14159;
    char v3 = '$';
    char v4[] = "Ali";
    printf("\n%d", v0);
    printf("\n%f", v1);
    printf("\n%lf", v2);
    printf("\n%c", v3);
    printf("\n%s", v4);
    // Width
    int n1 = 1;
    int n2 = 10;
    int n3 = 100;
    int n4 = -100;

    printf("\n%4d", n1); // you can do also %-4d for opposite way
    printf("\n%4d", n2);
    printf("\n%4d", n3);

    printf("\n%04d", n1);
    printf("\n%04d", n2);
    printf("\n%04d", n3);

    printf("\n%+d", n1);
    printf("\n%+d", n2);
    printf("\n%+d", n3);
    printf("\n%+d", n4);
    // Precision
    float p1 = 19.99;
    printf("\n%.2f", p1); // if it was %.1f, because of original p1 has second float point, it will be rounded to 20.00

    // Arithmetic Operations
    int x = 10;
    int y = 3;
    int z = 0;

    /*
    // 4 functions
    z = x + y; // 13
    z = x - y; // 7
    z = x * y; // 30
    z = x / y; // 3
    // more advanced
    z = x % y; // 1
    z = x++ // 11
    z = y-- // 2
    // Augmented assignment operators
    x += 2
    x -= 2
    x *= 2
    x /= 2
    */
    printf("\n%d", z);
    printf("\n%d", x);

    return 0;
}