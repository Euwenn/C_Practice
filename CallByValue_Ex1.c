#include <stdio.h>
/*
Write a program that swaps two integers using a function.

Guidance: Write a function that accepts two integers and swaps their values inside the function, but remember, since it's call by value, it won’t affect the original values.

*/

void swap(int* a, int* b) {
  int temp = *a;
  *a =  *b;
  *b = temp;
}

int main() {
  

  return 0;
}