#include <stdio.h>
int main() {
    int a = 10, b = 3, c = 7;
    int result;
    
    printf("========== OPERATOR PRECEDENCE DEMO ==========\n");
    printf("Values: a=%d, b=%d, c=%d\n\n", a, b, c);
    
    // Step-by-step evaluation of complex expression
    // Expression: result = a + b * c - (c / b) + (a & b) || (c > b) && !(a == b)
    
    printf("Expression: a + b * c - (c / b) + (a & b) || (c > b) && !(a == b)\n\n");
    
    printf("Step-by-step evaluation:\n");
    printf("1. Parentheses first:\n");
    printf("   (c / b) = %d / %d = %d\n", c, b, c / b);
    printf("   (a & b) = %d & %d = %d\n", a, b, a & b);
    printf("   (c > b) = %d > %d = %d\n", c, b, c > b);
    printf("   (a == b) = %d == %d = %d\n", a, b, a == b);
    
    printf("\n2. Unary ! (logical NOT):\n");
    printf("   !(a == b) = !%d = %d\n", a == b, !(a == b));
    
    printf("\n3. Arithmetic (*, / have higher precedence than +, -):\n");
    printf("   b * c = %d * %d = %d\n", b, c, b * c);
    printf("   Expression becomes: a + %d - %d + %d || %d && %d\n", 
           b * c, c / b, a & b, c > b, !(a == b));
    
    printf("\n4. Arithmetic (+, - from left to right):\n");
    int step = a + (b * c) - (c / b) + (a & b);
    printf("   a + (b*c) - (c/b) + (a&b) = %d + %d - %d + %d = %d\n", 
           a, b * c, c / b, a & b, step);
    
    printf("\n5. Logical AND (&&) before OR (||):\n");
    int and_result = (c > b) && !(a == b);
    printf("   (c > b) && !(a == b) = %d && %d = %d\n", c > b, !(a == b), and_result);
    
    printf("\n6. Logical OR (||):\n");
    result = step || and_result;
    printf("   %d || %d = %d\n\n", step, and_result, result);
    
    printf("Final result = %d\n", result);
   /* 
    // Operator Precedence Table
    printf("\n========== OPERATOR PRECEDENCE TABLE ==========\n");
    printf("Precedence | Operator Type          | Operators\n");
    printf("-----------|------------------------|----------------------------\n");
    printf("1 (Highest)| Postfix                | () [] . ->\n");
    printf("2          | Unary                  | ++ -- ! ~ + - * & sizeof\n");
    printf("3          | Multiplicative         | * / %%\n");
    printf("4          | Additive               | + -\n");
    printf("5          | Shift                  | << >>\n");
    printf("6          | Relational             | < <= > >=\n");
    printf("7          | Equality               | == !=\n");
    printf("8          | Bitwise AND            | &\n");
    printf("9          | Bitwise XOR            | ^\n");
    printf("10         | Bitwise OR             | |\n");
    printf("11         | Logical AND            | &&\n");
    printf("12         | Logical OR             | ||\n");
    printf("13         | Conditional            | ?:\n");
    printf("14 (Lowest)| Assignment             | = += -= etc.\n");
    */
    
    return 0;
}