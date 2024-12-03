#include <stdio.h>
/*
Write a program that reads and prints a string.

Use scanf() to read a string (using %s) and printf() to print it.
*/

int main() {
  // //car to store user string
  // char userStr[100]; 

  // //VERSION FOR NO SPACES (uncomment if you want to use this)
  // //ask for input 
  // printf("Please enter a string: ");
  // scanf("%s", userStr);

  // printf("Your string is: %s\n", userStr);

  //With spaces
  char userStr[100];

  printf("Please enter a string: ");
  fgets(userStr, sizeof(userStr), stdin); //Read input with spaces

  printf("Your string is: %s", userStr);

  return 0;
}