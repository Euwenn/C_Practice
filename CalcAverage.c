#include <stdio.h>

/*
Write a program that calculates the average of three numbers entered by the user.

Guidance: Prompt the user for three numbers, store them in variables, calculate the average, and print it.
*/
  int main() {
  double num1, num2, num3, average;

  printf("Please enter the first number: ");
  scanf("%lf", &num1);

  printf("Please enter the second number: ");
  scanf("%lf", &num2);

  printf("Please enter the third number: ");
  scanf("%lf", &num3);

  
  average = (num1 + num2 + num3) / 3;

  printf("The average is %.2f", average);

  return 0;
}