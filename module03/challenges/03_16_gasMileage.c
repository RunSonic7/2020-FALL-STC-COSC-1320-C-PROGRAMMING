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

   /* Error Checking, ensure value is not negative or zero but allow -1 */
   /* Initial question as opt out -1 allowed in first line of question */
   do
   {
      /* User Input for gallons of gasoline */
      printf("Please enter the number of gallons of gasoline (Type -1 to end): ");
      scanf("%f", &gallonsEntered);

      /* Validate User Input */
      if (gallonsEntered == 0 || gallonsEntered <= -2)
      {
         printf("Sorry, that is not a valid entry.\n\n");
      }
   } while (gallonsEntered == 0 || gallonsEntered <= -2);

   /* Continue with questioning */
   while (gallonsEntered != -1)
   {
      do
      {
         /* User input for miles of gallons driven */
         printf("Please enter the number of miles you drove on this tank of gasoline: ");
         scanf("%f", &milesDrivenEntered);

         /* Validate user input */
         if (milesDrivenEntered <= 0)
         {
            printf("Sorry, that is not a valid entry.\n\n");
         }
      } while (milesDrivenEntered <= 0);

      /* Add to running total of gallons and miles */
      gallonsStored += gallonsEntered;
      milesDrivenStored += milesDrivenEntered;

      /* Store and Display average for this set of inputs */
      intermediateUpdateAverage = milesDrivenEntered / gallonsEntered;
      printf("The miles per gallon for this tank was %f\n\n", intermediateUpdateAverage);

      do
      {
         /* User Input for gallons of gasoline */
         printf("Please enter the number of gallons of gasoline (Type -1 to end): ");
         scanf("%f", &gallonsEntered);

         /* Validate User Input */
         if (gallonsEntered == 0 || gallonsEntered <= -2)
         {
            printf("Sorry, entering zero is not allowed.\n\n");
         }
      } while (gallonsEntered == 0 || gallonsEntered <= -2);
   }

   /* Display Totals and overall average to user */
   printf("\n\nTOTALS\nMiles Driven: %f\n", milesDrivenStored);
   printf("Gallons of Gas: %f\n\n", gallonsStored);

   overallAverage = milesDrivenStored / gallonsStored;
   printf("The overall average was %f miles per gallon.\n", overallAverage);

   return 0;
}
