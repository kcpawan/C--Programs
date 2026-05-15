// Correct implementation
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "NEPAL";
    int len = strlen(str);
    
    printf("Correct pattern for 'NEPAL':\n");
    
    // Decreasing part
    for(int i = len; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    
    // Increasing part (starts from 3, not 2)
    for(int i = 3; i <= len; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

return 0;
}

/*
Final output:
NEPAL
NEPA
NEP
NE
N
NEP
NEPA
NEPAL

Logic:
1. First print full string, then remove one character from end each time
2. Then build back up starting from 3 characters
*/