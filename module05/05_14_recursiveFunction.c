/* Filename: 05_14_recursiveFunction.c
   Title:  Calculating Factorials with a recursive function.

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 18, 2020
   Notes: Fig. 5.14: fig05_14.c
*/

#include <stdio.h>

long factorial(long number); /* function prototype */

/* function main begins program execution */
int main(void)
{
   int i; /* counter */

   /* loop 11 times; during each iteration, calculate factorial (i) and display result */
   for (i = 0; i <= 10; i++)
   {
      printf("%2d! = %ld\n", i, factorial(i));
   } /* end for */

   return 0;
}

long factorial(long number)
{
   /* base case */
   if (number <= 1)
   {
      return 1;
   } /* end if */
   else
   { /* recursive step */
      return (number * factorial(number - 1));
   } /* end else */
} /* end function factorial */