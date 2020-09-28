/* Filename: test1.c
   Title:  Test 1
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 27, 2020
   Notes: Instructions in test1Instructions.txt
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   /* Variables */
   int currentMonth,
       currentDay,
       currentYear,
       age,
       monthBDay = 6,
       dayBDay = 2,
       yearBDay = 1990;
   bool isLeapYear,
       isValidDate,
       isValidMonth,
       isValidDay,
       isBday = false;

   /* Greet Agent */
   printf("    //////////////////////////////////////////\n");
   printf("   /                                        /\n");
   printf("  /    TOP SECRET BIRTHDAY DETERMINATOR    /\n");
   printf(" /                                        /\n");
   printf("//////////////////////////////////////////\n");

   printf("\nWelcome back, Agent Mireles. ");
   printf("Enter the requested information:\n\n");

   do
   {
      /* Assume false on data */
      isLeapYear = false,
      isValidDate = false,
      isValidMonth = false,
      isValidDay = false;

      /* User Input for Day, Month, Year */
      printf("Current Month (Ex. 1 for January): ");
      scanf("%i", &currentMonth);

      printf("Current Day:\t");
      scanf("%i", &currentDay);

      printf("Current Year:\t");
      scanf("%i", &currentYear);

      /* Determine if Leap Year */
      if (currentYear % 4 == 0)
         isLeapYear = true;

      /* Validate Month */
      if (currentMonth >= 1 && currentMonth <= 12)
         isValidMonth = true;

      /* Validate Day */
      if (currentMonth == 1 || currentMonth == 3 || currentMonth == 5 ||
          currentMonth == 7 || currentMonth == 8 || currentMonth == 10 ||
          currentMonth == 12)
      {
         if (currentDay >= 1 && currentDay <= 31)
            isValidDay = true;
      }
      else if (currentMonth == 4 || currentMonth == 6 || currentMonth == 9 ||
               currentMonth == 12)
      {
         if (currentDay >= 1 && currentDay <= 31)
            isValidDay = true;
      }
      else if (currentMonth == 2)
      { /* Month would be February, determine max 28 or 29 */
         if (isLeapYear == true)
         {
            if (currentDay >= 1 && currentDay <= 29)
               isValidDay = true;
         }
         else
         {
            if (currentDay >= 1 && currentDay <= 28)
               isValidDay = true;
         }
      }

      /* Determine if date is valid and alert user if not*/
      isValidDate = isValidMonth && isValidDay;

      if (isValidDate == false)
         printf("\nThe date entered is not valid.  Please re-enter the requested information.\n");
   } while (isValidDate == false);

   /* Calculate age */
   age = currentYear - yearBDay;

   /* Determine if birthday has happened in current year */
   /* If not happened, decrease by 1 */
   if (currentMonth < monthBDay)
   {
      age -= 1;
   }
   else if (currentMonth == monthBDay)
   {
      if (currentDay == dayBDay)
      {
         isBday = true;
      }
      /* Deterimine if day has passed of birthday */
      else if (currentDay < dayBDay)
      {
         age -= 1;
      }
   }

   /* Determine C-hicken type */
   if (age < 18)
   {
      printf("\nYou are a %i year old Spring C-hicken!\n", age);
   }
   else if (age >= 18 && age <= 25)
   {
      printf("\nYou are a %i year old Young C-hicken!\n", age);
   }
   else
   { /* Age is greater than or equal to 25 */
      printf("\nYou are a %i year old C-hicken!\n", age);
   }

   /* Display message if birthday or not */
   if (isBday == true)
   {
      printf("Happy Birthday!!!\n");
   } 
   else
   {
      printf("Happy UN-Birthday!!!\n");
   }
   
   return 0;
}
