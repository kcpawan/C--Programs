#include <stdio.h>  // Preprocessor directive
#define PI 3.14     // Macro definition

// Function declaration
int calculate(int radius);

int main() {
    // Keywords: int, return
    // Identifiers: main, calculate, radius, area
    // Constants: 10, 3.14
    // Operators: =, *, return
    // Special symbols: (), {}, ;, ,
    
    int radius = 10;
    float area;  area = PI * radius * radius;  // PI is replaced with 3.14
    
    printf("Area: %f\n", area);
    
    return 0;
}

int calculate(int r) {
    return PI * r * r;
}


