#include <stdio.h>

int main() {

	int myNumbers[] = {10, 25, 50, 75, 100};
	double myValues[] = {1.1, 2.2, 3.3};
	
	printf("%zu\n", sizeof(myNumbers));
	printf("%zu\n", sizeof(myValues));
	
	
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	printf("%d\n", length);  
	
	
	int length1 = sizeof(myValues) / sizeof(myValues[0]);
	
	printf("%d", length1);

return 0;
}