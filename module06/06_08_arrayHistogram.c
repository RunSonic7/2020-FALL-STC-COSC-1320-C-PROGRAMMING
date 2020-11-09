/* Filename: 06_08_arrayHistogram.c
   Title:  Histogram Printing Program

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 8, 2020
   Notes: Fig. 6.8: fig06_08.c
*/

#include <stdio.h>
#define SIZE 10

/* function main begins program execution */
int main(void)
{
    /* use initializer to list the initalize array */
    int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i;  /* outer for counter for array elements */
    int j;  /* innter for counter counts *s in each histogram bar */

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    /* for each element of array n, output a bar of the histogram */
    for (i = 0; i < SIZE; i++)
    {
        printf("%7d%13d        ", i, n[i]);

        for (j = 1; j <= n[i]; j++) { /* print one bar */
            printf("%c", '*');
        } /* end inner for */

        printf("\n"); /* end a histogram bar */
    }
    return 0;
} /* end outer for */
