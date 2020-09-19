/* Filename: 03_06_classAverage.c
   Title:  Class Average Program with Counter-Controlled Repetition
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 20, 2020
   Notes: Fig. 3.6 fig03_06.c
*/
#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
    int counter;    /* number of grade to be entered next */
    int grade;      /* grade value */
    int total;      /* sum of grades input by user */
    int average;    /* average of grades */

    /* Initialization Phase */
    total = 0;      /* Initialize Total */
    counter = 1;    /* Initialize Loop Counter */

    /* Processing Phase */
    while (counter <= 10)   /* Loop 10 Times */
    {
        printf("Enter grade: ");    /* prompt for input */
        scanf("%d", &grade);        /* read grade from user */
        total = total + grade;      /* add grade to total */
        counter = counter + 1;      /* increment counter */
    } /* End while */

    /* Termination Phase */
    average = total / 10;   /* Integer Division */

    printf("Class average is %d\n", average);   /* Display Result */
    
    return 0; /* Indicate Program Ended Successfully */

} /* End Function main */