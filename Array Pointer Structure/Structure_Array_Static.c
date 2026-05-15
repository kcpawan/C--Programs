#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3] = {
        {101, "Rahul", 89.5},
        {102, "Sneha", 92.0},
        {103, "Aman", 78.5}
    };

    // Print one of them
    printf("Name: %s, Marks: %.2f\n", students[1].name, students[1].marks);

    return 0;
}
