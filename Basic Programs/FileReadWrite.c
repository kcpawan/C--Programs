#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];

    // Writing
    fp = fopen("student.txt", "w");
    printf("Enter name: ");
    scanf("%s", name);
    fprintf(fp, "%s", name);
    fclose(fp);

    // Reading
    fp = fopen("student.txt", "r");
    fscanf(fp, "%s", name);
    printf("Name from file: %s", name);
    fclose(fp);

    return 0;
}
