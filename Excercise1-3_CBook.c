#include <stdio.h>

/*
Modify the temperature conversion program to print a
heading above the table.
*/
int main()
{
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
  }



  return 0;
}