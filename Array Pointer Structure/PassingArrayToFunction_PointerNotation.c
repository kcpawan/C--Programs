#include <stdio.h>

// Function receiving array as pointer
int sumArray(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);  // Pointer arithmetic
        // Alternative: sum += arr[i];
    }
    return sum;
}

int main() {
    int scores[] = {85, 90, 78, 92, 88};
    int size = sizeof(scores) / sizeof(scores[0]);
    
    int total = sumArray(scores, size);
    float average = (float)total / size;
    
    printf("Sum: %d\n", total);
    printf("Average: %.2f\n", average);
    
    return 0;
}