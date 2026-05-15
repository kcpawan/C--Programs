//Example 3: Restaurant Order System with Advanced Menu

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char category, itemChoice;
    int quantity;
    float total = 0.0;
    
    printf("=== WELCOME TO RESTAURANT XYZ ===\n");
    
    do {
        printf("\n=== MAIN MENU ===\n");
        printf("V/v - Vegetarian\n");
        printf("N/n - Non-Vegetarian\n");
        printf("B/b - Beverages\n");
        printf("D/d - Desserts\n");
        printf("S/s - Show Bill & Exit\n");
        printf("Enter category: ");
        scanf(" %c", &category);
        
        char upperCat = toupper(category);
        
        // If-else ladder for menu categories
        if (upperCat == 'V') {
            printf("\n=== VEGETARIAN MENU ===\n");
            printf("1. Veg Biryani - $8.99\n");
            printf("2. Paneer Butter Masala - $10.99\n");
            printf("3. Veg Fried Rice - $7.99\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice (1-4): ");
            scanf(" %c", &itemChoice);
            
            if (itemChoice == '1') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 8.99 * quantity;
                printf("Added %d Veg Biryani(s)\n", quantity);
            }
            else if (itemChoice == '2') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 10.99 * quantity;
                printf("Added %d Paneer Butter Masala(s)\n", quantity);
            }
            else if (itemChoice == '3') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 7.99 * quantity;
                printf("Added %d Veg Fried Rice(s)\n", quantity);
            }
            else if (itemChoice == '4') {
                printf("Returning to main menu...\n");
            }
            else {
                printf("Invalid choice!\n");
            }
        }
        else if (upperCat == 'N') {
            printf("\n=== NON-VEGETARIAN MENU ===\n");
            printf("1. Chicken Biryani - $12.99\n");
            printf("2. Mutton Curry - $15.99\n");
            printf("3. Fish Fry - $11.99\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice (1-4): ");
            scanf(" %c", &itemChoice);
            
            if (itemChoice == '1') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 12.99 * quantity;
                printf("Added %d Chicken Biryani(s)\n", quantity);
            }
            else if (itemChoice == '2') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 15.99 * quantity;
                printf("Added %d Mutton Curry(s)\n", quantity);
            }
            else if (itemChoice == '3') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 11.99 * quantity;
                printf("Added %d Fish Fry(s)\n", quantity);
            }
            else if (itemChoice == '4') {
                printf("Returning to main menu...\n");
            }
            else {
                printf("Invalid choice!\n");
            }
        }
        else if (upperCat == 'B') {
            printf("\n=== BEVERAGES MENU ===\n");
            printf("1. Coke - $1.99\n");
            printf("2. Fresh Lime - $2.49\n");
            printf("3. Coffee - $2.99\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice (1-4): ");
            scanf(" %c", &itemChoice);
            
            if (itemChoice == '1') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 1.99 * quantity;
                printf("Added %d Coke(s)\n", quantity);
            }
            else if (itemChoice == '2') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 2.49 * quantity;
                printf("Added %d Fresh Lime(s)\n", quantity);
            }
            else if (itemChoice == '3') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 2.99 * quantity;
                printf("Added %d Coffee(s)\n", quantity);
            }
            else if (itemChoice == '4') {
                printf("Returning to main menu...\n");
            }
            else {
                printf("Invalid choice!\n");
            }
        }
        else if (upperCat == 'D') {
            printf("\n=== DESSERTS MENU ===\n");
            printf("1. Ice Cream - $3.99\n");
            printf("2. Chocolate Cake - $5.99\n");
            printf("3. Fruit Salad - $4.49\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice (1-4): ");
            scanf(" %c", &itemChoice);
            
            if (itemChoice == '1') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 3.99 * quantity;
                printf("Added %d Ice Cream(s)\n", quantity);
            }
            else if (itemChoice == '2') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 5.99 * quantity;
                printf("Added %d Chocolate Cake(s)\n", quantity);
            }
            else if (itemChoice == '3') {
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 4.49 * quantity;
                printf("Added %d Fruit Salad(s)\n", quantity);
            }
            else if (itemChoice == '4') {
                printf("Returning to main menu...\n");
            }
            else {
                printf("Invalid choice!\n");
            }
        }
        else if (upperCat == 'S') {
            printf("\n=== FINAL BILL ===\n");
            printf("Total Amount: $%.2f\n", total);
            
            // Apply discounts based on total
            if (total >= 100) {
                float discount = total * 0.20;
                total -= discount;
                printf("20%% Discount Applied: -$%.2f\n", discount);
                printf("Amount after discount: $%.2f\n", total);
            }
            else if (total >= 50) {
                float discount = total * 0.10;
                total -= discount;
                printf("10%% Discount Applied: -$%.2f\n", discount);
                printf("Amount after discount: $%.2f\n", total);
            }
            else if (total >= 20) {
                float discount = total * 0.05;
                total -= discount;
                printf("5%% Discount Applied: -$%.2f\n", discount);
                printf("Amount after discount: $%.2f\n", total);
            }
            
            // Add tax
            float tax = total * 0.08;
            total += tax;
            printf("Tax (8%%): +$%.2f\n", tax);
            printf("Final Amount to Pay: $%.2f\n", total);
            
            printf("\nThank you for dining with us!\n");
            break;
        }
        else {
            printf("Invalid category! Please try again.\n");
        }
        
    } while (1); // Infinite loop until user chooses 'S'
    
    return 0;
}
