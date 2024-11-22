#include <stdio.h>
/*
Write a program that reads a single character from the user and prints it.

Guidance: Use scanf("%c", &ch) to read a character and printf("%c", ch) to print it.
*/
int main() {
  char ch = ' ';

  printf("Please enter a character: ");
  scanf("%c", &ch);

  printf("Your char is: %c", ch);

  return 0;
}