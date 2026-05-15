#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Apple,Banana,Orange,Mango,Grapes";
    char str2[] = "Hello World from C programming";
    char str3[] = "2024-03-15";
    
    // Tokenizing comma-separated values
    printf("Original: %s\n", str);
    printf("Tokens (comma delimiter):\n");
    
    char *token = strtok(str, ",");
    int count = 1;
    
    while(token != NULL) {
        printf("Token %d: %s\n", count++, token);
        token = strtok(NULL, ",");
    }
    
    // Tokenizing space-separated words
    printf("\nSpace-separated tokens:\n");
    char *word = strtok(str2, " ");
    count = 1;
    
    while(word != NULL) {
        printf("Word %d: %s\n", count++, word);
        word = strtok(NULL, " ");
    }
    
    // Parsing date
    printf("\nParsing date (YYYY-MM-DD):\n");
    char *year = strtok(str3, "-");
    char *month = strtok(NULL, "-");
    char *day = strtok(NULL, "-");
    
    printf("Year: %s\n", year);
    printf("Month: %s\n", month);
    printf("Day: %s\n", day);
    
    return 0;
}