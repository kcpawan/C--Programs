#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World";
    char str3[50] = "Good ";
    char str4[] = "Morning";
    char str5[50] = "Hello";
    char str6[] = " World!";
    
    // Basic concatenation
    strcat(str1, str2);
    printf("strcat result: %s\n", str1);  // "Hello World"
    
    // strncat - concatenate with length limit
    strncat(str3, str4, 3);  // Append first 3 chars of str4
    printf("strncat (first 3 chars): %s\n", str3);  // "Good Mor"
    
    // Building a sentence step by step
    char sentence[100] = "";
    strcat(sentence, "The ");
    strcat(sentence, "quick ");
    strcat(sentence, "brown ");
    strcat(sentence, "fox");
    printf("Built sentence: %s\n", sentence);
    
    // Important: Ensure destination has enough space
    char small[10] = "Hello";
    // strcat(small, " and very long world"); // DANGER - buffer overflow!
    
    return 0;
}