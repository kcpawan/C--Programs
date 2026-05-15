#include <stdio.h>

int main() {
    // Sum of first 10 natural numbers
    int sum = 0;
    
    for(int i = 1; i <= 10; i++) {
        sum += i;
    }
    
    printf("Sum: %d\n", sum);
    
    // Nested for loop - matrix multiplication pattern
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    
    return 0;
}

