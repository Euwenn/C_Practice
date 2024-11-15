#include <stdio.h>
/*
Write a program that uses a constant for the value of PI (3.14) and calculates the area of a circle for a given radius

Guidance: Define a constant for PI using #define, and use it in the area calculation
*/

#define PI 3.14

int main() {
  float r;
  float area;

  printf("Please enter a radius for a cirlce: ");
  scanf("%f", &r);

  area = PI * r * r;

  printf("area is: %.2f\n", area);
  

  return 0;
}