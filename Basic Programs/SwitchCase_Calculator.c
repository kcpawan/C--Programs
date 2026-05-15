#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("=== SIMPLE CALCULATOR ===\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
            
        case '%':
            // Modulus works only with integers
            {
                int int1 = (int)num1;
                int int2 = (int)num2;
                if (int2 != 0) {
                    result = int1 % int2;
                    printf("%d %% %d = %d\n", int1, int2, (int)result);
                } else {
                    printf("Error: Modulus by zero is not allowed!\n");
                }
            }
            break;
            
        default:
            printf("Error: Invalid operator '%c'\n", operator);
            printf("Valid operators are: +, -, *, /, %%\n");
    }
    
    return 0;
}
