#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    
    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("Address of x: %p, Address of y: %p\n", &x, &y);
    
    // Passing addresses of x and y
    swap(&x, &y);
    
    printf("\nAfter swap:\n");
    printf("x = %d, y = %d\n", x, y); // Successfully swapped!
    printf("Address of x: %p, Address of y: %p\n", &x, &y);
    
    return 0;
}

void swap(int *a, int *b) {
    printf("\nInside swap function:\n");
    printf("Received addresses: a=%p, b=%p\n", &a, &b);
    printf("Values: *a=%d, *b=%d\n", *a, *b);
    
    // Swap using temporary variable
    int temp = *a;  // Dereference to get value
    *a = *b;        // Assign value at b to a
    *b = temp;      // Assign temp to b
    
    printf("After swapping inside function:\n");
    printf("*a = %d, *b = %d\n", *a, *b);
}