/* Filename: 07_10_convertToUpper.c
   Title:  Converting lowercase letters to uppercase letters

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 22, 2020
   Notes: Fig 7.10: fig07_10.c
*/
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char* sPtr); /* prototype */

int main(void)
{
   char string[] = "characters and $32.98"; /* initialize char array */

   printf("The string before conversion is: %s", string);
   convertToUppercase(string);
   printf("\nThe string after conversion is: %s\n", string);

   return 0; /* indicates succesful termination */
} /* end main */

/* convert string to uppercase letters */
void convertToUppercase(char* sPtr)
{
   while (*sPtr != '\0') /* current character is not '\0' */
   {
      if (islower(*sPtr)) /* if character is lowercase */
      {
         *sPtr = toupper(*sPtr); /* convert to uppercase */
      } /* end if */
      ++sPtr; /*  move sPtr to the next character */
   } /* end while */
} /* end function convertToUppercase */