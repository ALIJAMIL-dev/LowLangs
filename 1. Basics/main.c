// Basics - 5
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void) 
{
    int age = 20;
    float height = 5.7;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    int number = 10;
    printf("Initial value: %d\n", number);
    number = 25;
    printf("Updated value: %d\n", number);
    number = number + 5;
    printf("After adding 5: %d\n", number);

    int sum1 = 20 + 40;
    int a = 20, b = 40;
    int sum2 = a + b;
    printf("%d\n%d", sum1, sum2);

    int num = 10;
    printf("%d bytes", sizeof(num));

    return 0;
}
