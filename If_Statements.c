#include<stdio.h>
#include<stdlib.h>

int main(void) {
  //Playing around with if statements.
  //Making a small program to see if a student passes-
  //or fails.


  /*
  int grade = 0;

  printf("Grade: ");
  scanf("%d", &grade);

  if(grade >= 50) 
  {
    printf("Pass\n");
    printf("Congrats!\n");
  }
  else 
  {
    printf("Fail\n"); 
    printf("Goodluck next time!\n");
  }
  */

  int grade = 0;
  printf("Grade: ");
  scanf("%d", &grade);

  if(grade >= 90) printf("A\n");
  else if (grade >= 80) printf("B\n");
  else if (grade >= 70) printf("C\n");
  else if (grade >= 60) 
  {
      printf("D\n");
  }
  else printf("Fail\n");

  return 0;
}