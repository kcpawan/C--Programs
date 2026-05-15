#include <stdio.h>
	int main() {    
	char name[100];
		int age;  
		
		printf("Please give me your name:");
    		scanf("%s",&name);
		
		printf("Please give me your age:");
    		scanf("%d",&age); 
		 
		if (age >= 18){
			printf("%s You are eligible for vote",&name);    
		}else {        
			printf("%s You are not Eligible for vote. You are just %d",&name,age);    
		}    
	return 0;
	}


