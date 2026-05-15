#include <stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
  
	// Find the size of the array arr
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", n);
    return 0;
}