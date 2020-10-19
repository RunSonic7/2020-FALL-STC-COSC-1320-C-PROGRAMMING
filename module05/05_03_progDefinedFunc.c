/* Filename: 05_03_progDefinedFunc.c
   Title:  Creating and Using a Programmer-defined function
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 18, 2020
   Notes: Fig. 5.3: fig05_03.c
*/

#include <stdio.h>

int square(int y);   /* function prototype */

/* function main begins program execution */
int main(void)
{
   int x;   /* counter */

   /* loop 10 times and calculate and output square of x each tie */
   for (x = 1; x <= 10; x++)
   {
      printf("%d ", square(x)); /* function call */
   } /* end for */
   
   printf("\n");

   return 0; /* indicates successful termination */
} /* end main */

/* square function definition returns square of parameter */
int square(int y) /* y is a copy of argument to function */
{
   return y * y;  /* returns square of y as an int */
} /* end function square */
