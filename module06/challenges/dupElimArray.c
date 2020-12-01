/* Filename: dupElimArray.c
   Title:  Duplicate Elimination

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 15, 2020
   Notes: (Duplicate Elimination) Use a one-dimensional array to solve the
          following problem. Read in 20 numbers, each of which is between 10
          and 100 inclusive. As each number is read, print it only if it's not
          a duplicate of a number already read. Provide for the "worse case"
          in which all 20 numbers are different. Use the smallest possible
          array to solve this problem.
*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 20

int main(void)
{
   // Variables
   int userInput;             // User Input value
   int values[SIZE] = {0};          // Array
   bool isDuplicate;         // Determine if duplicate
   int counter = 0;          // Counter to keep track of overall input
   int arrayIncrementer = 0; // Counter to keep track of array index location

   while (counter < SIZE)
   {
      // Validate use Input, only allow values 10 to 100 inclusive
      while (userInput < 10 || userInput > 100)
      {
         printf("Entry %d\n", counter + 1);
         printf("Please input a number: ");
         scanf("%d", &userInput);

         if (userInput < 10 || userInput > 100)
         {
            printf("Invalid Input. Please re-enter value.\n");
         }
      }

      // Check if duplicate in array
      for (int index = 0; index < arrayIncrementer + 1; index++)
      {
         if (userInput == values[index])
         {
            isDuplicate = true;
            break;
         }
         isDuplicate = false;
      }

      // If not a duplicate, add to the array
      if (isDuplicate == false)
      {
         arrayIncrementer++;
         values[arrayIncrementer - 1] = userInput;
      }
      counter++;
      userInput = 0;
   }

   // Declare new smallest possible array
   int inputDataFinal[arrayIncrementer];
   int incrementer = 0;

   // Put validated and non-dups into new array
   for (int i = 0; i < SIZE; i++)
   {

      if (values[i] != 0)
      {
         inputDataFinal[incrementer] = values[i];
         incrementer++;
      }
   }

   // Print Array to User
   printf("\nArray Contents:\n");
   for (int i = 0; i < arrayIncrementer; i++)
   {
      printf("%d ", inputDataFinal[i]);
   }

   // Display Array size which would equal incrementer value. 
   printf("\nArray Size: %d\n", incrementer);

   // Display message if all 20 values are unique, if not end line
   if (arrayIncrementer == SIZE)
   {
      printf("\nLooks like all your numbers are different!\n");
   }
   else
   {
      printf("\n");
   }

   return 0;
}