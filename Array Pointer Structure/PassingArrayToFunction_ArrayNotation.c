#include <stdio.h>

// Function that receives array using array notation
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing elements
    }
    printf("\n");
}

// Function that modifies the array
void doubleElements(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // Modifying original array
    }
    printf("Array doubled inside function\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Original array in main:\n");
    printArray(numbers, size);
    
    // Pass array to function that modifies it
    doubleElements(numbers, size);
    
    printf("Array in main after function call:\n");
    printArray(numbers, size);
    
    return 0;
}