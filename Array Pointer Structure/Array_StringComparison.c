#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Apple";
    char str3[] = "Banana";
    char str4[] = "apple";  // lowercase
    
    // strcmp - exact comparison
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str2, strcmp(str1, str2));  // 0 (equal)
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str3, strcmp(str1, str3));  // negative (A < B)
    printf("strcmp(\"%s\", \"%s\") = %d\n", str3, str1, strcmp(str3, str1));  // positive (B > A)
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str4, strcmp(str1, str4));  // positive (ASCII 'A' < 'a')
    
    // strncmp - compare first n characters
    char s1[] = "Hello World";
    char s2[] = "Hello Everyone";
    
    int result = strncmp(s1, s2, 5);  // Compare first 5 chars ("Hello")
    printf("\nFirst 5 chars comparison: %d\n", result);  // 0 (equal)
    
    result = strncmp(s1, s2, 7);  // Compare first 7 chars
    printf("First 7 chars comparison: %d\n", result);  // non-zero
    
    // Practical example: String sorting
    char *names[] = {"Charlie", "Alice", "Bob", "David"};
    int numNames = sizeof(names) / sizeof(names[0]);
    
    printf("\nBefore sorting:\n");
    for(int i = 0; i < numNames; i++) {
        printf("%s ", names[i]);
    }
    
    // Simple bubble sort
    for(int i = 0; i < numNames-1; i++) {
        for(int j = 0; j < numNames-i-1; j++) {
            if(strcmp(names[j], names[j+1]) > 0) {
                char *temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
    
    printf("\nAfter sorting:\n");
    for(int i = 0; i < numNames; i++) {
        printf("%s ", names[i]);
    }
    printf("\n");
    
    return 0;
}