//Pascal's Triangle (Simplified)


#include <stdio.h>
int main() {
    int i, j, coeff = 1;
    for(i=0; i<5; i++) {
        coeff = 1;
        for(j=0; j<=i; j++) {
            printf("%d ", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}