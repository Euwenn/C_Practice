#include <stdio.h>
/*
Objective: Convert a decimal number to binary, octal, and hexadecimal
*/

void printBinary(int n ) {
  int binary[32], i = 0;
  //Read a decimal number from the user using scanf.
  while(n > 0) {
    binary[i++] = n % 2;
    n /= 2;
  }

  //Print octal (%o) and hexadecimal (%x) directly using printf.

  //For binary, use a loop:
  //1: Divide the number by 2, store the remainder, and repeat until the quotient is 0.
  //2: Reverse the order of remainders to get the binary number.
  for(int j = i -1; j >= 0; j--) {
    printf("%d", binary[j]);
  }
  
}



int main() {
  return 0;
}