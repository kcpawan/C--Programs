#include <stdio.h>

int cube(int n) {
    return n * n *n;
}

int main() {
    int a;
    //int Cube_value;
    printf("Cube = %d\n", cube(5));
	
	
	printf("Input number for cube:");
	scanf("%d",&a);
	
	printf("Cube of %d is %d:",a,cube(a));
    
    
    return 0;
}

