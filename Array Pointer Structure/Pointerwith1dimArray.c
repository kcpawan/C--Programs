#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // p points to arr[0]

    // Access via array and pointer
    printf("arr[2] = %d\n", arr[2]);
    printf("*(p+2) = %d\n", *(p+2));
    printf("p[2] = %d\n", p[2]);   // pointer can be indexed too

    // Addresses
    printf("Address of arr: %p\n", arr);
    printf("Address stored in p: %p\n", p);
    return 0;
}
