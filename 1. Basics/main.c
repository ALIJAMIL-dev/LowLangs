// Basics - 9
#include <stdio.h>

int main(void)
{   
    // // for loop
    // for (int i = 0; i < 5; i++) {
    //     printf( "%d ", i + 1);
    // }

    // // while loop
    // int i = 0; 
    // while(i <= 5) {
    //     printf("%d ", i + 1);
    //     i++;
    // } 

    // // do-while loop
    // do{
    // // loop body
    // printf( "%d ", i);   

    // // Update expression
    // i++;
    
    // // Condition to check
    // }while (i <= 10);   

    // return 0;

    // loop control
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            
            // Exit the loop when i equals 3
            break;  
        }
        printf("%d ", i);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            
            // Skip the current iteration
            // when i equals 3
            continue;  
        }
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            
            // Jump to the skip label when
            // i equals 3
            goto skip;
        }
        printf("%d ", i);
    }
    
skip:
    printf("\nJumped to the 'skip' label %s",
    "when i equals 3.");

    
}
