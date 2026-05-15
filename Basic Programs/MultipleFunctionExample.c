#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
void printMessage();
int multiply(int x, int y) ;

int main() {
	
    // Example 1: Function with parameters and return value
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    
    // Example 2: Function without parameters or return value
    printMessage();
    
    // Example 3: Using return value directly
    printf("Product: %d\n", multiply(4, 5));
    
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// Function definition for multiply (declared later in code)
int multiply(int x, int y) {
    return x * y;
}

// Function definition for printMessage
void printMessage() {
    printf("Hello from function!\n");
}
