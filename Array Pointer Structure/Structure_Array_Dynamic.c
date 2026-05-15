#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[2];
    
    for (int i = 0; i < 2; i++) {
        printf("Enter roll no, name, and marks of student %d:\n", i + 1);
        scanf("%d", &students[i].rollNo);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
    // Display all
    for (int i = 0; i < 2; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
