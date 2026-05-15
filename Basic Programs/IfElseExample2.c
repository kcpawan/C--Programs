#include <stdio.h>

int main() {    
    char name[100];
    int age;  
    
    printf("Please give me your name: ");
    if(scanf(" %[^\n]", name) != 1) {
        printf("Error reading name!\n");
        return 1;
    }
    
    printf("Please give me your age: ");
    if(scanf("%d", &age) != 1) {
        printf("Error reading age! Please enter a valid number.\n");
        return 1;
    }
    
    if(age < 0 || age > 150) {
        printf("Invalid age entered!\n");
        return 1;
    }
    
    // Advanced if-else with multiple conditions
    if(age >= 18 && age <= 100) {
        printf("%s, you are eligible to vote!\n", name);
    } 
    else if(age >= 101 && age <= 150) {
        printf("Wow %s! At %d years, you're our most experienced voter!\n", name, age);
    }
    else if(age > 0 && age < 18) {
        printf("Sorry %s, you are not eligible to vote. You are just %d years old. You need %d more years.\n", name,age, 18 - age);
    }
    else {
        printf("Invalid age!\n");
    }
    
    return 0;
}

