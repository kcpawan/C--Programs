#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World!";
    char str3[] = "";
    
    printf("String: \"%s\"\n", str1);
    printf("Length: %lu\n", strlen(str1));  // Returns 5
    
    printf("\nString: \"%s\"\n", str2);
    printf("Length: %lu\n", strlen(str2));  // Returns 6
    
    printf("\nEmpty string length: %lu\n", strlen(str3));  // Returns 0
    
    // Manual implementation to understand
    int manualLen = 0;
    while(str1[manualLen] != '\0') {
        manualLen++;
    }
    printf("Manual length of \"%s\": %d\n", str1, manualLen);
    
    return 0;
}