#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World, Hello Universe";
    char ch = 'o';
    char *substr = "World";
    
    // strchr - find first occurrence of a character
    char *first_o = strchr(str, ch);
    if(first_o != NULL) {
        int position = first_o - str;  // Pointer arithmetic to get index
        printf("First '%c' found at position: %d\n", ch, position);
        printf("Rest of string from that point: %s\n", first_o);
    }
    
    // Find all occurrences of a character
    printf("\nAll positions of '%c': ", ch);
    char *ptr = str;
    while((ptr = strchr(ptr, ch)) != NULL) {
        printf("%ld ", ptr - str);
        ptr++;  // Move to next character
    }
    printf("\n");
    
    // strstr - find first occurrence of a substring
    char *found = strstr(str, substr);
    if(found != NULL) {
        int position = found - str;
        printf("\n'%s' found at position: %d\n", substr, position);
        printf("Rest of string: %s\n", found);
    }
    
    // Check if string starts with a prefix
    char *url = "https://www.example.com";
    if(strstr(url, "https://") == url) {
        printf("\nURL starts with https://\n");
    }
    
    return 0;
}