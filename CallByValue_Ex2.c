/*
Write a program that calculates the area of a rectangle using a function and call by value.

Guidance: Pass the length and width to the function, and it will return the area by multiplying both values.
*/
#include <stdio.h>

//func to calc area of rectangle, three vars passed
float areaCalc(float len, float width) { 
  return len * width;
}




int main() {
  float length, width, area;

  // Input length and width from the user
  printf("Enter the length of the rectangle: ");
  scanf("%f", &length);
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);

  // Call the function and store the result
  area = areaCalc(length, width);

  // Display the result
  printf("The area of the rectangle is: %.2f\n", area);

}