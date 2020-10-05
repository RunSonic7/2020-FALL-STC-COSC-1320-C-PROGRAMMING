/* Filename: 04_06_forLoopCompoundInterest.c
   Title:  Calculating compound interest (for Loop)
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.6: fig04_06.c
*/
#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main(void)
{
   double amount;             /* amount on deposit */
   double principal = 1000.0; /* starting principal */
   double rate = .05;         /* annual interest rate */
   int year;                  /* year counter */

   /* output table column head */
   printf("%4s%21s\n", "Year", "Amount on deposit");

   /* calculate amount on deposit for each of ten years */
   for (year = 1; year <= 10; year++)
   {

      /* calculate new amount for specified year */
      amount = principal * pow(1.0 + rate, year);

      /* output one table row */
      printf("%4d%21.2f\n", year, amount);
   } /* end for */

   return 0; /* indicate program ended successfully */

} /* end function main */