#include <stdio.h>
#include <ctype.h>

int main() {
    char transactionType;
    float balance = 5000.0, amount;
    
    printf("=== BANK TRANSACTION SYSTEM ===\n");
    printf("Current Balance: $%.2f\n", balance);
    printf("\nTransaction Types:\n");
    printf("D/d - Deposit\n");
    printf("W/w - Withdrawal\n");
    printf("B/b - Balance Inquiry\n");
    printf("T/t - Transfer\n");
    printf("Enter transaction type: ");
    scanf(" %c", &transactionType);
    
    // Convert to uppercase for easier comparison
    char upperType = toupper(transactionType);
    
    // If-else ladder for transaction processing
    if (upperType == 'D') {
        printf("\n=== DEPOSIT TRANSACTION ===\n");
        printf("Enter amount to deposit: $");
        scanf("%f", &amount);
        
        if (amount <= 0) {
            printf("Error: Deposit amount must be positive!\n");
        }
        else if (amount > 10000) {
            printf("Large deposit detected ($%.2f)\n", amount);
            printf("Please visit the bank for amounts above $10,000\n");
        }
        else {
            balance += amount;
            printf("Successfully deposited $%.2f\n", amount);
            printf("New Balance: $%.2f\n", balance);
        }
    }
    else if (upperType == 'W') {
        printf("\n=== WITHDRAWAL TRANSACTION ===\n");
        printf("Enter amount to withdraw: $");
        scanf("%f", &amount);
        
        if (amount <= 0) {
            printf("Error: Withdrawal amount must be positive!\n");
        }
        else if (amount > balance) {
            printf("Error: Insufficient funds!\n");
            printf("Available balance: $%.2f\n", balance);
        }
        else if (amount > 5000) {
            printf("Large withdrawal detected ($%.2f)\n", amount);
            printf("Please visit the bank for withdrawals above $5,000\n");
        }
        else if (amount < 100) {
            printf("Note: Minimum withdrawal is $100\n");
        }
        else {
            balance -= amount;
            printf("Successfully withdrew $%.2f\n", amount);
            printf("New Balance: $%.2f\n", balance);
        }
    }
    else if (upperType == 'B') {
        printf("\n=== BALANCE INQUIRY ===\n");
        printf("Current Balance: $%.2f\n", balance);
        
        // Check account status based on balance
        if (balance >= 10000) {
            printf("Status: Premium Account Holder\n");
        }
        else if (balance >= 5000) {
            printf("Status: Gold Account Holder\n");
        }
        else if (balance >= 1000) {
            printf("Status: Silver Account Holder\n");
        }
        else if (balance > 0) {
            printf("Status: Standard Account Holder\n");
            printf("Warning: Low balance!\n");
        }
        else {
            printf("Status: Zero Balance Account\n");
            printf("Alert: Your account has no funds!\n");
        }
    }
    else if (upperType == 'T') {
        printf("\n=== TRANSFER TRANSACTION ===\n");
        char accountNumber[20];
        printf("Enter recipient account number: ");
        scanf("%s", accountNumber);
        printf("Enter transfer amount: $");
        scanf("%f", &amount);
        
        if (amount <= 0) {
            printf("Error: Transfer amount must be positive!\n");
        }
        else if (amount > balance) {
            printf("Error: Insufficient funds for transfer!\n");
        }
        else if (amount > 2000) {
            printf("Large transfer detected ($%.2f)\n", amount);
            printf("Security verification required for transfers above $2,000\n");
            
            char otp[7];
            printf("Enter OTP sent to your mobile: ");
            scanf("%s", otp);
            
            // Simple OTP validation (in real system, this would be more complex)
            if (strlen(otp) == 6) {
                balance -= amount;
                printf("Transfer successful to account %s\n", accountNumber);
                printf("Transferred: $%.2f\n", amount);
                printf("New Balance: $%.2f\n", balance);
            }
            else {
                printf("Error: Invalid OTP. Transfer cancelled.\n");
            }
        }
        else {
            balance -= amount;
            printf("Transfer successful to account %s\n", accountNumber);
            printf("Transferred: $%.2f\n", amount);
            printf("New Balance: $%.2f\n", balance);
        }
    }
    else {
        printf("\nError: Invalid transaction type '%c'!\n", transactionType);
        printf("Please choose: D, W, B, or T\n");
    }
    
    return 0;
}

