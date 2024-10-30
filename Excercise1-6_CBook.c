#include <stdio.h>

/*
Exercise 1-6. Verify that the expression getchar ()!= EOF is 0 or l.
*/

int main() {

  
  int c;

  while ((c = getchar())!= EOF) 
  {
  putchar(c);

    
  }

  return 0;
}