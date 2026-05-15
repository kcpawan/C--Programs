#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example 1: Using malloc() - Allocate memory for 5 integers
    printf("=== MALLOC EXAMPLE ===\n");
    int *ptr_malloc;
    int n = 5;
    
    // Allocating memory using malloc
    ptr_malloc = (int *)malloc(n * sizeof(int));
    
    if(ptr_malloc == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    // Storing values in malloc allocated memory
    printf("Enter %d integers for malloc array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ptr_malloc[i]);
    }
    
    // Displaying values
    printf("Values stored using malloc: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr_malloc[i]);
    }
    printf("\n\n");
    
    // Free malloc memory
    free(ptr_malloc);
    
    // Example 2: Using calloc() - Allocate memory for 5 integers (initialized to 0)
    printf("=== CALLOC EXAMPLE ===\n");
    int *ptr_calloc;
    
    // Allocating memory using calloc (automatically initializes to 0)
    ptr_calloc = (int *)calloc(n, sizeof(int));
    
    if(ptr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    // Displaying initial values (should all be 0)
    printf("Initial calloc values (automatically set to 0): ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n");
    
    // Modifying some values
    printf("Enter %d integers for calloc array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ptr_calloc[i]);
    }
    
    // Displaying updated values
    printf("Updated calloc values: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n\n");
    
    // Example 3: Using realloc() - Resize the allocated memory
    printf("=== REALLOC EXAMPLE ===\n");
    int new_size = 8;
    
    // Resizing the calloc array to hold 8 integers instead of 5
    ptr_calloc = (int *)realloc(ptr_calloc, new_size * sizeof(int));
    
    if(ptr_calloc == NULL) {
        printf("Memory reallocation failed!\n");
        exit(1);
    }
    
    // Adding more values to the expanded array
    printf("Enter %d more integers for the resized array:\n", new_size - n);
    for(int i = n; i < new_size; i++) {
        scanf("%d", &ptr_calloc[i]);
    }
    
    // Displaying all values after reallocation
    printf("All values after reallocation: ");
    for(int i = 0; i < new_size; i++) {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n\n");
    
    // Example 4: Dynamic array with user input
    printf("=== DYNAMIC ARRAY EXAMPLE ===\n");
    int *dynamic_array;
    int size;
    
    printf("Enter the size of array you want to create: ");
    scanf("%d", &size);
    
    // Allocate memory based on user input
    dynamic_array = (int *)malloc(size * sizeof(int));
    
    if(dynamic_array == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    // Input values
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &dynamic_array[i]);
    }
    
    // Display values
    printf("Dynamic array values: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", dynamic_array[i]);
    }
    printf("\n");
    
    // Free all allocated memory
    free(ptr_calloc);      // Free the reallocated memory
    free(dynamic_array);    // Free the dynamic array
    
    printf("\nAll memory has been freed successfully!\n");
    
    return 0;
}