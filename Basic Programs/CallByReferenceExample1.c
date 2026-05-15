#include <stdio.h>

// Function declaration with pointer parameter
void modifyValue(int *ptr);

int main() {
    int original = 10;
    
    printf("Before function call:\n");
    printf("Original value in main: %d\n", original);
    printf("Address of original: %p\n", &original);
    
    // Call by Reference - passing address using & operator
    modifyValue(&original);
    
    printf("\nAfter function call:\n");
    printf("Original value in main: %d\n", original); // Changed to 20
    printf("Address of original: %p\n", &original); // Same address
    
    return 0;
}
// Function definition with pointer parameter
void modifyValue(int *ptr) {
    printf("\nInside function:\n");
    printf("Received address: %p\n", ptr);
    printf("Value at address: %d\n", *ptr);
    
    // Modify the value at the address
    *ptr = *ptr * 2;
    printf("Modified value: %d\n", *ptr);
    
    // This change affects the original variable in main()
}
