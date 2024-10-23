#include<stdio.h>
#include<stdlib.h>

int main(void) {
  //Played around with relational operators, > >= < <= == !=


  int  height = 0;
  printf("Height: ");
  scanf("%d", &height);

  if(height != 160) {
     printf("is not 160\n");
  }
  else {
     printf("Is 160\n");
  }


  return 0;
}