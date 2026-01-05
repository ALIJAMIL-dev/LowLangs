// Basics - 7
#include <stdio.h>

int main(void) 
{
    fputs("This is my string\n", stdout);

    // scanf("formatted_string", address_of_variables/values);
    
    int age1;
    printf("Enter your age: ");
  
    // Reads an integer
    scanf("%d", &age1);  
  
    // Prints the age
    printf("Age is: %d\n", age1);  

    char ch;
    printf("Enter a character: \n");
  
    // Reads an Character
    scanf("%c", &ch);  
  
    // Prints the Character
    printf("Entered character is: %c\n", ch);  

    char str[100];  // Declare an array to hold the input string

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until the first space or newline

    printf("You entered: %s\n", str);

    // String variable
    char name[20];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s", name);
    
    return 0;
}
