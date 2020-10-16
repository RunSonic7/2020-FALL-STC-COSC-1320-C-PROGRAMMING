/* Filename: 04_10_avgInt.c
   Title:  Average of Sequence of Integers (Loops)
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 11, 2020
   Notes: Write a program that calculates and prints the average of several 
          integers (you don't know how many will be entered). Assume the last
          value read with scanf is the sentinel 9999 (this tells you that you
          have reached the end of the list of numbers). A typical input sequence
          might be

          10 8 11 7 9 9999

          indicated that the average of all the values preceding 9999 is to be
          calculated. (9999 should not be included in the average)
*/

#include <stdio.h>
#include <math.h> // required for math functions

int main(void)
{
   /* Variables */
   int userInput = 0;
   int runningTotal = 0;
   int inputCounter = 0;
   float average;

   /* Ask user for numbers */
   printf("Please enter a list of integer numbers. (Type 9999 to end): ");

   do
   {
      scanf("%d", &userInput);
      if (userInput == 9999)
      {
         continue;
      }
      else
      {
         runningTotal += userInput;
         inputCounter += 1;
      }

   } while (userInput != 9999);

   /* Calculate average */
   if (inputCounter == 0)
   {
      printf("No numbers input.\n");
   }
   else
   {
      /* Calculate Average */
      average = (float)runningTotal / inputCounter;

      /* Display info to user */
      printf("\nRunning Total: %d\n", runningTotal);
      printf("Number of Entries: %d\n", inputCounter);
      printf("Average: %f\n", average);
   }
   return 0;
}