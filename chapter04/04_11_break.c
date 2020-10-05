/* Filename: 04_11_break.c
   Title:  Using the break statement in a for statement
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 4, 2020
   Notes: Fig. 4.11: fig04_011.c
*/

#include <stdio.h>

/* function main begins program execution */
int main(void)
{
    int x; /* counter */

    /* loop 10 times */
    for (x = 1; x <= 10; x++)
    {

        /* if x is 5, terminate loop */
        if (x == 5)
        {
            break; /* break loop only if x is 5 */
        }          /* end if */

        printf("%d ", x); /* display value of x */
    }                     /* end for */

    printf("\nBroke out of loop at x == %d\n", x);

    return 0; /* indicate program ended successfully */

} /* end function main */