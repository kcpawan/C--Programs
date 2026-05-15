#include <stdio.h>

int main() {
    int a[10];
    int i;
    int largest, smallest;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > largest)
            largest = a[i];
        if (a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}

