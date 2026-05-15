#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello World";
    char destination1[20];
    char destination2[20];
    char destination3[20];
    
    // strcpy - basic copy
    strcpy(destination1, source);
    printf("strcpy: %s\n", destination1);
    
    // strcpy with direct literal
    strcpy(destination2, "New String");
    printf("Direct copy: %s\n", destination2);
    
    // strncpy - copy with length limit (safer)
    strncpy(destination3, source, 5);
    destination3[5] = '\0';  // Manually null-terminate!
    printf("strncpy (first 5 chars): %s\n", destination3);
    
    // Dangerous example - buffer overflow
    char smallBuffer[5];
    // strcpy(smallBuffer, "This is too long"); // NEVER DO THIS - buffer overflow!
    
    // Safe way
    strncpy(smallBuffer, "This is too long", 4);
    smallBuffer[4] = '\0';
    printf("Safe copy with truncation: %s\n", smallBuffer);
    
    return 0;
}