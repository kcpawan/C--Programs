#include <stdio.h>

int main() {
    int maths, science, english, nepali, computer;
    int total;
    float percentage;

    printf("Enter marks of Maths: ");
    scanf("%d", &maths);

    printf("Enter marks of Science: ");
    scanf("%d", &science);

    printf("Enter marks of English: ");
    scanf("%d", &english);

    printf("Enter marks of Nepali: ");
    scanf("%d", &nepali);

    printf("Enter marks of Computer: ");
    scanf("%d", &computer);

    total = maths + science + english + nepali + computer;
    percentage = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade: A+");
    else if (percentage >= 80)
        printf("\nGrade: A");
    else if (percentage >= 70)
        printf("\nGrade: B+");
    else if (percentage >= 60)
        printf("\nGrade: B");
    else if (percentage >= 50)
        printf("\nGrade: C");
    else
        printf("\nGrade: F");

    if (percentage >= 40)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}

