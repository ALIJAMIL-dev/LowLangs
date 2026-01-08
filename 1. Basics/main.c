// Basics - 9
#include <stdio.h>

int main(void)
{
    int age = 11;

    if (age >= 18) {
        if (age >= 60)
            printf("Eligible to vote (Senior Citizen)\n");
        else
            printf("Eligible for vote\n");
    }
    else {
        printf("Not eligible to vote (Under 18)\n");
        if (age >= 13) 
                printf("teenager\n");
            else
                printf("not a teenager\n");
        }
    // If-else if 
    int i = 20;

    // If else ladder with three conditions
    if (i == 10)
        printf("Not Eligible");
    else if (i == 15)
        printf("wait for three years");
    else if (i == 20)
        printf("You can vote");
    else
        printf("Not a valid age");

    // variable to be used in switch statement
    int var1 = 18;

    // declaring switch cases
    switch (var1) {
    case 15:
        printf("You are a kid");
        break;
    case 18:
        printf("Eligible for vote");
        break;
    default:
        printf("Default Case is executed");
        break;
    }

    int var;
    int flag = 0;

    // using conditional operator to assign the value to var
    // according to the value of flag
    var = flag == 0 ? 25 : -25;
    printf("Value of var when flag is 0: %d\n", var);

    // Break
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int key = 3;
    int size = 6;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at position: %d",
                   (i + 1));
            break;
        }
    }

    // Continue
     for (int i = 1; i <= 10; i++) {

        // If i is equals to 6,
        // continue to next iteration
        // without printing
        if (i == 6)
            continue;
        else
            printf("%d ", i);
    }
    // Goto
    int n = 1;
    label:
        printf("%d ", n);
        n++;
        if (n <= 10)
            goto label;
        return 0;

    // Return
    int num1 = 10;
    int num2 = 10;
    int sumOf = sum(num1, num2);
    printf("%d", sumOf);
}

int sum(int a, int b) {
    int s1 = a + b;
    return s1;
}
