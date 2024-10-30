#include <stdio.h>


/*
Write a program to print the corresponding Celsius to
Fahrenheit table.
*/
int main() {

  //fahr to cel table
  /*
  float fahr, Celcius; int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  //header
  printf("--------------------\n");
  printf("Fahr    Celcius\n");
  printf("--------------------\n");
  
  while(fahr <= upper) {
    
    Celcius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, Celcius);
    fahr = fahr + step;
  */

 //formula for C to f = F = C×(9/5)+32

  float Fahr, Cel; int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  Cel = lower;

  printf("--------------------\n");
  printf("Celcius    Fahr\n");
  printf("--------------------\n");

  while(Cel <= upper) {
      Fahr = Cel * (9.0/5.0) + 32.0;
      printf("%3.0f %14.1f\n", Cel, Fahr);
      Cel = Cel + step;
  }

  return 0;
}