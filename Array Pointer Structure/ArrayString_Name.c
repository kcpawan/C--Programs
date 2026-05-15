#include<stdio.h>

int main() {

    // Creating array of strings for 3 strings
    // with max length of each string as 10
    char arr[3][10] = {"Pawan", "Sudhir", "Saroj"};
  
    for (int i = 0; i < 3; i++)
        printf("%s\n", arr[i]);
    
    
    printf("\n");
    printf("\n");

  
  // Array of pointers to strings
  char *arr1[] = {"Geek", "Geeks", "Geekfor"};
  
  for (int i = 0; i < 3; i++)
    printf("%s\n", arr1[i]);
  return 0;
}
