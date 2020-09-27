/* Filename: 03_16_gasMileage.c
   Title:  Gas Mileage
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 27, 2020
   Notes: Drivers are concerned with the mileage obtained by their automobiles, 
          One driver has kept track of several tankfuls of gasoline by recording 
          miles driven and gallons used for each tankful. Develop a program that
          will input the miles driven and gallons used for each tankful. The
          program should calculate and display the miles per gallon obtained for
          each tankful. After processing all input information, the program
          should calculate and print the combined miles per gallons obtained or
          all tankfuls. There is a sample input/output dialog in the book.
*/

#include <stdio.h>

int main(void)
{
   /* Variables */
   float intermediateUpdateAverage = 0.0,
         overallAverage = 0.0,
         gallonsEntered,
         milesDrivenEntered,
         gallonsStored = 0.0,
         milesDrivenStored = 0.0;

   /* User Input for gallons of gasoline */
   printf("Please enter the number of gallons of gasoline (Type -1 to end): ");
   scanf("%f", &gallonsEntered);

   while (gallonsEntered != -1)
   {

      /* User input for miles of gallons driven */
      printf("Please enter the number of miles you drove on this tank of gasoline: ");
      scanf("%f", &milesDrivenEntered);

      gallonsStored += gallonsEntered;
      milesDrivenStored += milesDrivenEntered;

      intermediateUpdateAverage = milesDrivenEntered / gallonsEntered;

      printf("The miles / gallon for this tank was %f\n\n", intermediateUpdateAverage);

      /* User Input for gallons of gasoline */
      printf("Please enter the number of gallons of gasoline: ");
      scanf("%f", &gallonsEntered);
   }

   printf("\nMiles Driven %f\n", milesDrivenStored);
   printf("Gallons Total %f\n\n", gallonsStored);

   overallAverage = milesDrivenStored / gallonsStored;
   printf("The miles / gallon for this tank was %f", overallAverage);

   return 0;
}
