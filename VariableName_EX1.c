#include <stdio.h>
/*
Easy Problem: Write a program that declares two variables: one for storing a person's age and another for storing their height. Initialize the variables with values and print them.

Guidance: Make sure to use meaningful variable names like age and height. Use printf() to display their values
*/

int main() {
  //2 vars, 1 for age and 1 for height
  int age;
  float height;

  //print vars
  printf("Please enter your age: ");
  scanf("%d", &age);

  printf("Pleae enter your height in cm: ");
  scanf("%f", &height);
  
  printf("Your height is %.2f: ", height);
  printf("Your age is %d: ", age);
  return 0;
}