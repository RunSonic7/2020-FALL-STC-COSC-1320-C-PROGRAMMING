/* Filename: 07_11_nonConstPtr_constData.c
   Title: Printing a string one character at a time using a
          non-constant pointer to constant data

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 22, 2020
   Notes: Fig. 7.11: fig07_11.c
*/
#include <stdio.h>

void printCharacters(const char* sPtr);

int main(void)
{
   /* initalize char array */
   char string[] = "print characters of a string";

   printf("The string is:\n");
   printCharacters(string);
   printf("\n");

   return 0; /* indicates successful termination */
} /* end main */

/* sPtr cannot modify the character to which it points,
   i.e., sPtr is a "read-only" pointer */
void printCharacters(const char* sPtr)
{
   /* loop through entire string */
   for (; *sPtr != '\0'; sPtr++) /* no initialization */
   {
      printf("%c", *sPtr);
   } /* end for */
} /* end function printCharacters */
