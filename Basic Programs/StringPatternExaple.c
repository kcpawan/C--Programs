#include <stdio.h>
#include <string.h>

// Function prototypes
void printPattern(const char *str);
void printPatternAlternative(const char *str);

int main() {
    char word[100];
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    printf("\n=== PATTERN 1 ===\n");
    printPattern(word);
    
    printf("\n=== PATTERN 2 ===\n");
    printPatternAlternative(word);
    
    printf("\n=== PATTERN 3 (Complete NEPAL pattern) ===\n");
    strcpy(word, "NEPAL");
    printPattern(word);
    
    return 0;
}

// Function to print the required pattern
void printPattern(const char *str) {
    int len = strlen(str);
    
    // Part 1: Decreasing length
    printf("Decreasing part:\n");
    for(int i = len; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    
    // Part 2: Increasing length (starting from 2)
    printf("\nIncreasing part:\n");
    for(int i = 2; i <= len; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

// Alternative implementation
void printPatternAlternative(const char *str) {
    int len = strlen(str);
    
    // Single loop approach
    printf("Complete pattern in one sequence:\n");
    
    // Print decreasing
    for(int i = len; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    
    // Print increasing (skip 1 as it's already printed)
    for(int i = 2; i <= len; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

/*
Explanation of the pattern for "NEPAL":

Length = 5 characters

Decreasing part:
i=5: Print first 5 chars: NEPAL
i=4: Print first 4 chars: NEPA
i=3: Print first 3 chars: NEP
i=2: Print first 2 chars: NE
i=1: Print first 1 char:  N

Increasing part:
i=2: Print first 2 chars: NEP (but wait, that's 3?)
Actually: 
i=2: NE
i=3: NEP
i=4: NEPA
i=5: NEPAL

But the question shows:
NEPAL
NEPA
NEP
NE
N
NEP
NEPA
NEPAL

So the increasing part starts with 3 characters, not 2.
Let me correct the pattern.
*/

