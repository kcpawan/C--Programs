#include <stdio.h>

// Must specify column size (second dimension)
void printMatrix(int arr[][4], int rows) {
    printf("Matrix (%d x 4):\n", rows);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate row sums
void calculateRowSums(int arr[][4], int rows, int rowSums[]) {
    for(int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for(int j = 0; j < 4; j++) {
            rowSums[i] += arr[i][j];
        }
    }
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Original matrix:\n");
    printMatrix(matrix, 3);
    
    int rowSums[3];
    calculateRowSums(matrix, 3, rowSums);
    
    printf("\nRow sums:\n");
    for(int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i, rowSums[i]);
    }
    
    return 0;
}