#include <stdio.h>

int main() {
    int marks;
    char grade;
    
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    
    // If-else ladder for grade calculation
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
        printf("Grade: %c\n", grade);
        printf("Excellent! You passed with distinction.\n");
    }
    else if (marks >= 75 && marks < 90) {
        grade = 'B';
        printf("Grade: %c\n", grade);
        printf("Very Good! Keep up the good work.\n");
    }
    else if (marks >= 60 && marks < 75) {
        grade = 'C';
        printf("Grade: %c\n", grade);
        printf("Good. There's room for improvement.\n");
    }
    else if (marks >= 50 && marks < 60) {
        grade = 'D';
        printf("Grade: %c\n", grade);
        printf("Pass. You need to work harder.\n");
    }
    else if (marks >= 0 && marks < 50) {
        grade = 'F';
        printf("Grade: %c\n", grade);
        printf("Failed. Please try again next time.\n");
        
        // Nested if-else for failure analysis
        if (marks >= 40) {
            printf("You were close! Just a little more effort.\n");
        }
        else if (marks >= 30) {
            printf("You need to study the fundamentals again.\n");
        }
        else {
            printf("Serious attention required. Consider a tutor.\n");
        }
    }
    else {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    }
    
    return 0;
}

