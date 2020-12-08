/* Filename: final.c
   Title:  Final Exam

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Monday, December 7, 2020 11:59PM CT
   Notes: Instructions in txt file
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 5  /* Array Size */

/* prototypes */
void displayMenu(void);
void enterGrades(int*);
void fullReport(int*);
int gradeHighest(int*, int*);
int gradeLowest(int*, int*);

int main(void)
{
    /* randomize random number generator using current time */
    srand(time(NULL));

    /* Variables */
    int grades[SIZE];
    int userInputOption;
    int highestGrade;
    int lowestGrade;
    int* ptr = NULL;

    /* Initialize array */
    for (int i = 0; i < SIZE; i++)
    {
        grades[i] = rand() % 51 + 50;
    }

    printf("\n");
    printf("\n");

    do { /* loop until option 5 is chosen */
        displayMenu();

        /* Prompt user input */
        printf("Please Input an Option:  ");
        scanf("%d", &userInputOption);

        switch (userInputOption)
        {
        case 1:
            enterGrades(grades);
            break;

        case 2:
            fullReport(grades);
            break;

        case 3:
            highestGrade = gradeHighest(grades, ptr);
            printf("\n\nHighest Grade: %d\n\n", highestGrade);
            break;

        case 4:
            lowestGrade = gradeLowest(grades, ptr);
            printf("\n\nHighest Grade: %d\n\n", lowestGrade);
            break;

        case 5:
            printf("\nProgram ended.\n");
            break;

        default:
            printf("Your entry was invalid.  Please try again.\n");
            break;
        }
    } while (userInputOption != 5);

    return 0;
}

void displayMenu(void)
{
    printf("+------------------------------------------------+\n"
        "|--- THE GRADER - Pointer Version - MAIN MENU ---|\n"
        "+------------------------------------------------+\n\n"

        "1. Enter 5 grades\n"
        "2. Show Report (Average, Grades, Letter Grade)\n"
        "3. Show Highest Grade\n"
        "4. Show Lowest Grade\n"
        "5. Exit\n\n");
}

void enterGrades(int* array)
{
    int grade;
    for (int i = 0; i < SIZE; i++)
    {
        do
        { /* loop until valid */
            printf("Please enter a grade from 0 to 100: ");
            scanf("%d", &grade);

            if (grade < 0 || grade > 100)
            {
                printf("Your input was invalid. Please try again.\n\n");
            }

        } while (grade < 0 || grade > 100);

        /* set array value */
        *(array + i) = grade;
    }
    printf("\n\n");
}

void fullReport(int* array)
{
    /* Calculate average */
    double average;
    char letter;
    for (int i = 0; i < SIZE; i++)
    {
        /* Determine total grade values */
        average = average + *(array + i);
    }

    /* Take sum and divide by size to find average */
    average = (average / SIZE);

    /* Set letter grade based on value of average */
    if (average >= 90)
    {
        letter = 'A';
    }
    else if (average >= 80)
    {
        letter = 'B';
    }
    else if (average >= 70)
    {
        letter = 'C';
    }
    else if (average >= 60)
    {
        letter = 'D';
    }
    else
    {
        letter = 'F';
    }

    /* Print array */
    printf("\nGrades: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(array + i));
    }

    printf("\nAverage: %.1lf\n", average);
    printf("Letter Grade: %c\n\n", letter);
}

int gradeHighest(int* array, int* pointer)
{
    int max = *(array + 0); /* assume first value to be greatest */

    /* Determine highest */
    for (pointer = array; pointer < array + SIZE; ++pointer)
    {
        if (*pointer > max)
        {
            max = *pointer;
        }
    }
    return max;
}

int gradeLowest(int* array, int* pointer)
{
    int min = *(array + 0); /* assume first value to be lowest */

        /* Determine lowest */
    for (pointer = array; pointer < array + SIZE; ++pointer)
    {
        if (*pointer < min)
        {
            min = *pointer;
        }
    }
    return min;
}