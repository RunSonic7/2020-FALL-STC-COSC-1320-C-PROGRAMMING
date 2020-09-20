/* Filename: 03_13_preIncPostInc.c
   Title:  Preincrementing and Postincrementing 
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 20, 2020
   Notes: Fig. 3.13: fig03_13.c
*/
#include <stdio.h>

int main(void)
{
    int c;          /* defind variable */

    /* Demonstrate postincrement */
    c = 5;                  /* Assign 5 to c */
    printf("%d\n", c);      /* Print 5 */
    printf("%d\n", ++c);    /* Preincrement then print 6 */
    printf("%d\n\n", c);      /* Print 6 */

    /* Demonstrate preincrement */
    c = 5;                  /* Assign 5 to c */
    printf("%d\n", c);      /* Print 5 */
    printf("%d\n", ++c);    /* Preincrement then print 6 */
    printf("%d\n", c);      /* Print 6 */

    return 0;   /* Indicate program ended successfully */
} /* End function main */
