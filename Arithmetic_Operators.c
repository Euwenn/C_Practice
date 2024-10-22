#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //Playing around with arithmetic operators.
  double x = 5.2, y = 2.5;

  double mult = x * y;
  double add = x + y;
  double div = x / y;
  double sub = x - y;

  printf("mult: %f\n", mult);
  printf("add: %f\n", add);
  printf("div: %f\n", div);
  printf("sub: %f\n", sub); 

  //Modulos
  int x = 14, 
  int mod = x % 2;

  printf("mod: %d\n", mod);


  return 0;
}