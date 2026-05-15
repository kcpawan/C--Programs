#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
      
      	// Exit the loop when i equals 5
        if (i == 5) {
            continue;  
        }
        printf("%d ", i);
    }
    return 0;
}