#include <stdio.h>
/*
  Write a program that prompts the user to enter two integers and prints their sum.
  Guidance: Use scanf() to take two integer inputs from the user, then calculate their sum and display it using printf().
*/
int main() {

  int num1, num2;
  
  printf("Please enter 2 integers: ");
  scanf("%d %d", &num1, &num2);

  int sum = num1 + num2;
  printf("The sum of your two integers is %d:", sum);

  return 0;
}