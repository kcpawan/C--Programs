#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];

    // Modifying (Input)
    students[0].rollNo = 101;
    strcpy(students[0].name, "Anjali");
    students[0].marks = 85.5;

    students[1].rollNo = 102;
    strcpy(students[1].name, "Karan");
    students[1].marks = 91.0;


	// Accessing (Output)
	    for (int i = 0; i < 2; i++) {
	        printf("Roll No: %d\n", students[i].rollNo);
	        printf("Name: %s\n", students[i].name);
	        printf("Marks: %.2f\n", students[i].marks);
	        printf("------\n");
	    }
	
	    return 0;
	}
