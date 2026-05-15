#include <stdio.h>

// Function declaration
void modifyValue(int num);

int main() {
    int original = 10;
    
    printf("Before function call:\n");
    printf("Original value in main: %d\n", original);
    
    // Call by Value - passing a copy of 'original'
    modifyValue(original);
    
    printf("\nAfter function call:\n");
    printf("Original value in main: %d\n", original); // Still 10
    
    return 0;
}

// Function definition
void modifyValue(int num) {
    printf("\nInside function:\n");
    printf("Received value: %d\n", num);
    
    // Modify the parameter
    num = num * 2;
    printf("Modified value: %d\n", num);
    
    // This change only affects the local copy 'num'
}
