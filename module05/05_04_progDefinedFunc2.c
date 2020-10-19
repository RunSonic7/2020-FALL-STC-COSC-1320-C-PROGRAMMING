/* Filename: 05_04_progDefinedFunc2.c
   Title:  Finding the maximum of three integers
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 18, 2020
   Notes: Fig. 5.4: fig05_04.c
*/

#include <stdio.h>

int maximum(int x, int y, int z); /* function prototype */

/* function main beins program execution */
int main(void)
{
   int number1; /* first integer */
   int number2; /* second integer */
   int number3; /* third integer */

   printf("Enter three integers: ");
   scanf("%d%d%d", &number1, &number2, &number3);

   /* number1, number2 and number3 are arguments
      to the maximum function call */
   printf("Maximum is: %d\n", maximum(number1, number2, number3));

   return 0; /* indicates successful termination */
} /* end main */

/* Function maximum definition */
/* x, y and z are parameters */
int maximum(int x, int y, int z)
{
   int max = x; /* assume x is largest */

   if (y > max) /* if y is larger than max, assign y to max */
   {
      max = y;
   } /* end if */

   if (z > max)
   { /* if z is larger than max, assign z to max */
      max = z;
   } /* end if */

   return max; /* max is largest value */
}
