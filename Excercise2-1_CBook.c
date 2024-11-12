#include <stdio.h>
#include <limits.h>

/* 
Exercise 2-1. Write a program to determine the ranges of char, short,int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. 
*/

int main() {
  //char limits
  printf("Signed char min: %d\n", CHAR_MIN);
  printf("Signed char max: %d\n", CHAR_MAX);
  printf("Unigned char max: %u\n", UCHAR_MAX);

  //short
  printf("Signed short min: %d\n", SHRT_MIN);
  printf("Signed short max: %d\n", SHRT_MAX);
  printf("Unsigned short max: %u\n", USHRT_MAX);

  //int
  printf("Signed int min: %d\n", INT_MIN);
  printf("Signed int max: %d\n", INT_MAX);
  printf("Unigned int min: %u\n", UINT_MAX);

  //long
  printf("Signed long min: %ld\n", LONG_MIN);
  printf("Signed long max: %ld\n", LONG_MAX);
  printf(" Unsigned long max: %ld\n", ULONG_MAX);

  // Manual calculations
    printf("\nManual Calculations:\n");

    // Signed char
    printf("Signed char min: %d\n", -(1 << 7));          // -(2^(8-1))
    printf("Signed char max: %d\n", (1 << 7) - 1);       // (2^(8-1)) - 1
    printf("Unsigned char max: %u\n", (1U << 8) - 1);    // (2^8) - 1

    // Signed short
    printf("Signed short min: %d\n", -(1 << 15));        // -(2^(16-1))
    printf("Signed short max: %d\n", (1 << 15) - 1);     // (2^(16-1)) - 1
    printf("Unsigned short max: %u\n", (1U << 16) - 1);  // (2^16) - 1

    // Signed int
    printf("Signed int min: %d\n", -(1 << 31));          // -(2^(32-1))
    printf("Signed int max: %d\n", (1 << 31) - 1);       // (2^(32-1)) - 1
    printf("Unsigned int max: %u\n", (1U << 32) - 1);    // (2^32) - 1

    // Signed long (assuming 32-bit long)
    printf("Signed long min: %ld\n", -(1L << 31));       // -(2^(32-1))
    printf("Signed long max: %ld\n", (1L << 31) - 1);    // (2^(32-1)) - 1
    printf("Unsigned long max: %lu\n", (1UL << 32) - 1); // (2^32) - 1

  return 0;
}