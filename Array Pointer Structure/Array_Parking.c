#include <stdio.h>

int main() {
    // Declare and initialize a 3D array: 2 Floors, 3 Rows, 4 Columns
    int parking[2][3][4] = {
        { // Floor 0
            {0, 1, 0, 1}, // Row 0
            {1, 0, 1, 0}, // Row 1
            {0, 0, 1, 1}  // Row 2
        },
        { // Floor 1
            {1, 1, 1, 1}, // Row 0 (All occupied)
            {0, 0, 0, 0}, // Row 1 (All empty)
            {1, 0, 0, 1}  // Row 2
        }
    };

printf("Parking Garage Occupancy (1=Occupied, 0=Empty):\n");

    // Three nested loops to access each element
    // Loop 1: Iterate through each floor (depth)
    for(int floor = 0; floor < 2; floor++) {
        printf("Floor %d:\n", floor);

        // Loop 2: Iterate through each row on the current floor
        for(int row = 0; row < 3; row++) {
            // Loop 3: Iterate through each column in the current row
            for(int col = 0; col < 4; col++) {
                printf("%d ", parking[floor][row][col]); // Access element
            }
            printf("\n"); // End of current row
        }
        printf("\n"); // Blank line after each floor
    }

    // Check a specific spot: Floor 1, Row 2, Column 3 (should be 1)
    printf("Spot at Floor 1, Row 2, Column 3 is: %d\n", parking[1][2][3]);

    return 0;
}
