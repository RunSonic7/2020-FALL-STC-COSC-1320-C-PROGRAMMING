/* Filename: 04_01_counterControlled.c
   Title:  Counter Controlled Repetition
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.1: fig04_01.c
*/
#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
    int counter = 1;    /* Initialization */

    while (counter <= 10) /* Repetition condition */
    {
        printf("%d\n", counter);    /* Display counter */
        ++counter;  /* Increment */
    } /* End while */

    return 0;   /* indicate program ended successfully */
} /* End function main */