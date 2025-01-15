/*
Write a C program that takes two single binary digits (0 or 1) as input and calculates their sum, including the carry if applicable
*/
#include <stdio.h>

int main() {
  // Variables to store the binary digits
  int bitA, bitB;

  // Variables for the result %2 and carry /2
  int result, carry;

  // Input two single binary digits
  printf("Enter the first binary digit: ");
  scanf("%d", &bitA);

  printf("Enter the second binary digit:");
  scanf("%d", &bitB);

  // Validate input
  if (bitA < 0 || bitA > 1 || bitB < 0 || bitB > 1) {
     // Exit the program
    printf("Invalid input. Please enter 0 or 1.\n");
  }
    
  // Perform the binary addition
  result = bitA + bitB;

  //Sum without carry
  printf("Sum without carry: %d\n", result % 2);

  //Carry
  printf("Carry: %d\n", result / 2);

   // Output the result
  printf("The sum of %d and %d is %d\n", bitA, bitB, result);
  return 0;
}