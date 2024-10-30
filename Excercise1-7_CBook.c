#include <stdio.h>

/*
Exercise 1-7. Write a program to print the value of EOF
*/

int main() {

  
  int c;

  printf("The value of EOF is: %d", c);
  while ((c = getchar())!= EOF) 
  {
    putchar(c);
  }
  return 0;
}