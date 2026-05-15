#include <stdio.h>

int main() {
    int choice;
    int a, b;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- MENU ---\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Quotient\n");
    printf("5. Remainder\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("The sum = %d", a + b);
            break;

        case 2:
            printf("The difference = %d", a - b);
            break;

        case 3:
            printf("The product = %d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("The quotient = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            if (b != 0)
                printf("The remainder = %d", a % b);
            else
                printf("Division by zero not allowed");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

