#include <stdio.h>
#include <string.h>

/*
Write a program that reverses a string.
Use a loop to reverse the string by swapping characters from both ends
*/
int main() {
  //Array to store the string
  char str[100];

  //Indices for swapping
  int i, j;

  //Input the string
  printf("Please enter a string: ");
  fgets(str, sizeof(str), stdin);

  //Remove newline character if present
  str[strcspn(str, "\n")] = '\0';

  //Get the length of the string
  int len = strlen(str);

  //Reverse the string using a loop
  for (i = 0, j = len -1; i < j; i++, j--) {
    // Swap characters
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
    

  //Output the reversed string
  printf("Reversed string: %s\n", str);

  return 0;
}