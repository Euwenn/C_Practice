#include <stdio.h>
/*
Exercise 1-15. Rewrite the temperature conversion program of
Section 1.2 to use a function for conversion*/

/* print Fahrenheit-Celsius table for fahr = 0, 20, 300 */
//function for fahr to cel.
  int fahr_to_celsius(int fahr) {
    int celsius;
    celsius = 5 * (fahr - 32) / 9;
    return celsius;
  }

int main() {
  int fahr, Celsius;
  int lower, upper, step;
  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  fahr = lower;

  while (fahr <= upper)
  {
    Celsius = fahr_to_celsius(fahr);
    printf("%d\t%d\n", fahr, Celsius);
    fahr = fahr + step;
  } 

  

}