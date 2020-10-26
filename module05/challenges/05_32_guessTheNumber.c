/* Filename: 05_32_guessTheNumber.c
   Title:  Guess The Number

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 25, 2020
   Notes: Write a C program that plays the game of "Guess the number" as the
          following: Your program choose the number to be guessed by selecting
          an integer at random in the rang of 1 to 1000. The program then asks
          the use to guess the number. If the player's guess is incorrect, your
          program should loop until the player finally gets the number right.
          Your program keeps telling the player "Too High" or "Too Low" to help
          the player "zero in" on the correct number.
   Credits: ASCII Art Generator: http://patorjk.com/software/taag/
*/

#include <stdio.h>
#include <stdbool.h> /* To use boolean type */
#include <stdlib.h>
#include <time.h>

bool determineWinner(int, int);  /* prototype */
void winnerTest();  /* Print WINNER */

int main(void)
{
   /* Variables */
   int userGuess;
   int winningNumber;
   const int MIN = 1;
   const int MAX = 1000;
   bool isWinner = false;

   /* randomize random number generator using current time */
   srand(time(NULL));

   /* Title Card */
   printf("=======================================================\n"
      "================ GUESS THE NUMBER GAME ================\n"
      "=======================================================\n");

   /* Determine winning number */
   winningNumber = rand() % 1000 + 1;

   /* printf("%d", winningNumber); To test winning number */

   /* Ask user to choose a number */
   printf("Guess a number between 1 and 1000 inclusive.\n");

   /* Do loop until the winning number is chosen */
   do
   {
      printf("\nWhat is your guess? : ");
      scanf("%d", &userGuess);

      isWinner = determineWinner(userGuess, winningNumber);

   } while (isWinner == false);

   winnerTest();
   printf("\nYour number %d is equal to the winning number %d\n", userGuess, winningNumber);

   return 0;
}

bool determineWinner(int num, int winNum)
{
   if (num > winNum)
   {
      printf("Your guess is TOO HIGH. Try Again.\n");
      return false;
   }
   else if (num < winNum)
   {
      printf("Your guess is TOO LOW. Try Again.\n");
      return false;
   }
   else
   {
      return true;
   }
}

void winnerTest()
{
   printf(" __          __  _____   _   _   _   _   ______   _____\n"
      " \\ \\        / / |_   _| | \\ | | | \\ | | |  ____| |  __ \\ \n"
      "  \\ \\  /\\  / /    | |   |  \\| | |  \\| | | |__    | |__) |\n"
      "   \\ \\/  \\/ /     | |   | . ` | | . ` | |  __|   |  _  / \n"
      "    \\  /\\  /     _| |_  | |\\  | | |\\  | | |____  | | \\ \\ \n"
      "     \\/  \\/     |_____| |_| \\_| |_| \\_| |______| |_|  \\_\\ \n");
}
