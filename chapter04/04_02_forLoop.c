/* Filename: 04_02_counterControlled.c
   Title:  Counter Controlled Repetition with the for statement
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.2: fig04_02.c
*/

#include <stdio.h>

int main(void)
{
    int counter; /* Define counter */

    /* Initialization, repetition condition and increment are all included 
       in the for statement header */
    for (counter = 1; counter <= 10; counter++)
    {
        printf("%d\n", counter);
    } /* End for */

    return 0; /* Indicate program ended successfully */
} /* End function main */