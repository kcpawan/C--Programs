#include <stdio.h>

// Function receiving pointer to array of 4 integers
void modifyElement(int (*arr)[4], int row, int col, int newValue) {
    arr[row][col] = newValue;  // Modifying specific element
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Before modification:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Modify element at row 1, column 2
    modifyElement(matrix, 1, 2, 99);
    
    printf("\nAfter modification:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}