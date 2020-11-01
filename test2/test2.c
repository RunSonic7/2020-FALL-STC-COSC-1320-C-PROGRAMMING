/* Filename: test2.c
   Title:  Test 2

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 1, 2020
   Notes: Instructions in test2instructions.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* Prototype Functions */
void displayMenu(void);
int enterGrade();
void calculateAverage(int, int, int, int);
int determineHighestGrade(int, int, int);
int determineLowestGrade(int, int, int);
void showAllGrades(int, int, int);


int main(void)
{
   /* randomize random number generator using current time */
   srand(time(NULL));

   /* Variables */
   int const NUM_GRADES = 3;
   int grade1 = rand() % 51 + 50, /* 0 to 50 plus 50 is 50 to 100 */
      grade2 = rand() % 51 + 50,
      grade3 = rand() % 51 + 50,
      highestGrade,
      lowestGrade,
      userInputOption;
   float average;


   do
   {
      displayMenu();

      printf("Please Input an Option:  ");
      scanf("%d", &userInputOption);

      switch (userInputOption)
      {
      case 1:
         printf("Grade 1: ");
         grade1 = enterGrade();
         printf("Grade 2: ");
         grade2 = enterGrade();
         printf("Grade 3: ");
         grade3 = enterGrade();
         break;
      case 2:
         calculateAverage(grade1, grade2, grade3, NUM_GRADES);
         break;
      case 3:
         highestGrade = determineHighestGrade(grade1, grade2, grade3);
         printf("The highest grade is %d\n\n", highestGrade);
         break;
      case 4:
         lowestGrade = determineLowestGrade(grade1, grade2, grade3);
         printf("The lowest grade is %d\n\n", lowestGrade);
         break;
      case 5:
         showAllGrades(grade1, grade2, grade3);
         break;
      case 6:
         printf("\nHave a great day!\n");
         break;

      default:
         printf("Your entry was invalid.  Please Try Again.\n");
         break;
      }
   } while (userInputOption != 6);

   return 0;
}

/* Functions */
void displayMenu(void)
{
   printf("+------------------------------+\n"
      "|--- THE GRADER - MAIN MENU ---|\n"
      "+------------------------------+\n\n"

      "1. Enter 3 grades\n"
      "2. Show Average\n"
      "3. Show Highest Grade\n"
      "4. Show Lowest Grade\n"
      "5. Show All Grades\n"
      "6. Exit\n\n");
}

int enterGrade()
{
   int grade;
   do
   {  /* Loop until valid */
      printf("Please enter a grade from 0 to 100: ");
      scanf("%d", &grade);

      if (grade < 0 || grade > 100)
      {
         printf("\nYour input was invalid. Please try again.\n\n");
      }
   } while (grade < 0 || grade > 100);
   return grade;
}

void calculateAverage(int number1, int number2, int number3, int numberOfGrades)
{
   printf("+------------------------------+\n"
      "|----- AVERAGE OF GRADES ------|\n"
      "+------------------------------+\n\n");

   float average;
   char letterGrade;
   average = (float)(number1 + number2 + number3) / numberOfGrades;

   /* Provide letter grade based on value of average */
   if (average >= 90)
   {
      letterGrade = 'A';
   }
   else if (average >= 80)
   {
      letterGrade = 'B';
   }
   else if (average >= 70)
   {
      letterGrade = 'C';
   }
   else if (average >= 60)
   {
      letterGrade = 'D';
   }
   else
   {
      letterGrade = 'F';
   }
   /* Display average and corresponding letter grade to user */
   printf("Average \t%.1f\n", average);
   printf("Letter Grade\t%c\n\n\n", letterGrade);
}

int determineHighestGrade(int number1, int number2, int number3)
{
   printf("+------------------------------+\n"
      "|------- HIGHEST GRADE --------|\n"
      "+------------------------------+\n\n");

   int highest = number1; /* Assume highest */

   if (number2 > highest)
      highest = number2;

   if (number3 > highest)
      highest = number3;

   return highest;
}

int determineLowestGrade(number1, number2, number3)
{
   printf("+------------------------------+\n"
      "|------- LOWEST GRADE ---------|\n"
      "+------------------------------+\n\n");

   int lowest = number1; /* Assume lowest */

   if (number2 < lowest)
      lowest = number2;

   if (number3 < lowest)
      lowest = number3;

   return lowest;
}

void showAllGrades(int number1, int number2, int number3)
{
   printf("+------------------------------+\n"
      "|--------- GRADE MENU ---------|\n"
      "+------------------------------+\n\n"
      "Grade 1: %d\n"
      "Grade 2: %d\n"
      "Grade 3: %d\n\n\n", number1, number2, number3);
}