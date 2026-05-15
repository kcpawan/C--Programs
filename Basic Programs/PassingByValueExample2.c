#include <stdio.h>

void swap(int a, int b);

int main() {
    int x = 5, y = 10;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    swap(x, y);  // Call by Value
    
    printf("After swap: x = %d, y = %d\n", x, y); // No change!
    
    return 0;
}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap: a = %d, b = %d\n", a, b);
}
