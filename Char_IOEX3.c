#include <stdio.h>
#include <ctype.h>
/*
Write a program that reads a character and prints it in uppercase using toupper().
Guidance: Use toupper() to convert a character to uppercase before printing it.
*/

int main()
{
    char ch;

    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));

    return 0;
}