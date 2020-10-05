/* Filename: 04_12_continue.c
   Title:  Using the continue statement in a for statement 
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.7: fig04_07.c
*/

#include <stdio.h>

/* function main begins program execution */
int main(void)
{
    int x; /* counter */

    /* loop 10 times */
    for (x = 1; x <= 10; x++)
    {

        /* if x is 5, continue with next iteration of loop */
        if (x == 5)
        {
            continue; /* skip remaining code in loop body */
        }             /* end if */

        printf("%d ", x); /* display value of x */
    }                     /* end for */

    printf("\nUsed continue to skip printing the value 5\n");

    return 0; /* indicate program ended successfully */

} /* end function main */