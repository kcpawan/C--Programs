#include <stdio.h>

int main() {
    int max;

    // Ask the user for the range of integers
    printf("Enter the maximum integer: ");
    scanf("%d", &max);

    // Print the title and column headers
    printf("::::: A TABLE OF POWERS :::::\n");
    printf("%10s %10s %10s %10s %10s\n",
           "Integer", "Square", "3rd power", "4th power", "5th power");

    // Generate and print the table rows
    for (int i = 1; i <= max; i++) {
        long long square = (long long)i * i;          // i^2
        long long cube   = square * i;                // i^3
        long long fourth = cube   * i;                // i^4
        long long fifth  = fourth  * i;               // i^5

        printf("%10d %10lld %10lld %10lld %10lld\n",
               i, square, cube, fourth, fifth);
    }

    return 0;
}