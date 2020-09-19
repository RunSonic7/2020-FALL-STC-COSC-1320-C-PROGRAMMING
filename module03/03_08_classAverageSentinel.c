/* Filename: 03_08_classAverageSentinel.c
   Title:  Class Average Program with Sentinel-Controlled Repetition 
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 20, 2020
   Notes: Fig. 3.8 git03_08.c
*/
#include <stdio.h>

int main(void)
{
    int counter;    /* Number of Grades Entered */
    int grade;      /* Grade Value */
    int total;      /* Sum of Grades */

    float average;  /* Number with decimal Point for Average */

    /* Initialization Phase */
    total = 0;      /* Initialize Total */
    counter = 0;    /* Initialize Loop Counter */

    /* Processing Phase */
    /* Get first grade from user.*/
    printf("Enter grade, -1 to end: ");     /* Prompt for input */
    scanf("%d", &grade);                    /* Read grade from user */
    
    /* Loop while sentinel value not yet read from user */
    while (grade != -1)
    {
        total = total + grade;  /* Add grade to total */
        counter = counter + 1;  /* Increment counter */

        /* Get next grade from user */
        printf("Enter grade, -1 to end: ");     /* Prompt for input */
        scanf("%d", &grade);                    /* Read grade from user */
    } /* End while */

    /* Termination Phase */
    /* If use entered at least one grade */
    if (counter != 0)
    {
        /* Calculate average of all grades entered */
        average = (float) total / counter;  /* Avoid Truncation */

        /* Display average with two digits of precision */
        printf("Class average is %.2f\n", average);
    } /* End if */
    else 
    {   /* If no grades were entered, output message */
        printf("No grades were entered\n");
    } /* End else */

    return 0;   /* Indicate program ended successfully */
} /* End Function main */