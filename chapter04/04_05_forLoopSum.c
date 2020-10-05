/* Filename: 04_05_forLoopSum.c
   Title:  Summation with for loop.
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.5: fig04_05.c
*/

#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
   int sum = 0; /* Initialize sum */
   int number;  /* Number to be added to sum */

   for (number = 2; number <= 100; number += 2)
   {
      sum += number; /* Add number to sum */
   }

   printf("Sum is %d\n", sum); /* Output sum */

   return 0; /* Indiciate program ended successfully */
} /* End function main */