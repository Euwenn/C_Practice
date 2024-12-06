#include <stdio.h>

/*
Write a program that defines a variable for each of the following types: int, float, char, and double. Assign them values and print them in the same line.

Guidance: Use each data type (int, float, char, double) and display their values with printf(). Make sure the values are printed correctly based on their types
*/
int main() {

  int a = 10;
  float b = 20.5f;
  char c = 'A';
  double d = 3.271828;

  printf("A is: %d, B is: %.2f, C is: %c, D is: %.5f\n", a, b, c, d);

  return 0;
}


 
