#include <stdio.h>
#include <string.h>
/*
Write a program that asks the user for their name and age, then prints a greeting message.

Guidance: Use scanf() for reading a string (name) and integer (age), then print them using printf().
*/
int main() {
  char name[50];
  int age = 0;

  printf("Please enter your name: \n");
  scanf("%s", name);

  printf("Please enter your age: \n");
  scanf("%d", &age);
  

  printf("Your age is: %d \n", age);
  printf("Your name is: %c \n", name);

  return 0;
}