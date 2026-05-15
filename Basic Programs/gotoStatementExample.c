#include <stdio.h>

int main() {
    // Example 1: Error handling
    int number;
    
    printf("Enter a positive number: ");
    scanf("%d", &number);
    
    if(number <= 0) {
        printf("Invalid input!\n");
        goto error_handler;  // Jump to error handler
    }
    
    printf("Valid number entered: %d\n", number);
    goto end_program;  // Skip error handler
    
    error_handler:
        printf("Please run the program again with valid input.\n");
    
    end_program:
        printf("Program ended.\n");
    
    // Example 2: Breaking out of nested loops
    printf("\nSearching in 3x3 matrix:\n");
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            printf("Checking [%d][%d]\n", i, j);
            if(i == 2 && j == 2) {
                printf("Found target at (2,2)! Exiting both loops.\n");
                goto found_target;
            }
        }
    }
    found_target:
        printf("Continuing with rest of program...\n");
    
    return 0;
}