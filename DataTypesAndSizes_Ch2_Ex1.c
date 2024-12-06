#include <stdio.h>

/*
Write a program that prints the size of an integer (int) and a floating-point number (float).

Guidance: Use sizeof() to print the size of these data types in bytes.
*/
int main() {
  int size = 55;
  float sizef = 100.55f;

  printf("The size of the int in bytes is: %zu bytes\n", sizeof(size));
  printf("The size of the float in bytes is: %zu bytes\n", sizeof(sizef));

  return 0;
}