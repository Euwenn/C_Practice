#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //playing around with scanf/printf and varaibles.

  //If insepcting, you can remove the comments around code.
  //I only did it to isolate small blocks of code for testing. 

  float x = 5.2;
  double y = -9.8;

  printf("x: ");
  scanf("%f", &x);
  printf("x: %f\n", x);

  printf("y: ");
  scanf("%lf", &y);
  printf("y: %f\n", y);

  char c = 'd';

  printf("c: ");
  scanf("%c",  &c);
  printf("c: %c\n", c);
  printf("c: %d\n", c);

  return 0;
}