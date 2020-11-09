/* Filename: 06_11_staticArrays.c
   Title:  Static arrays are initialized to zero

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 8, 2020
   Notes: Fig. 6.11: fig06_11.c
*/

#include <stdio.h>

void staticArrayInit(void); /* function prototype */
void automaticArrayInit(void); /* function prototype */

/* function main begins program execution */
int main(void)
{
    printf("First all to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    return 0; /* indidcates succesful termination */
} /* end main */

/* function to demonstrate a static local array */
void staticArrayInit(void)
{
    static int array1[3];
    int i; /* counter */

    printf("\nValues on entering staticArrayInit:\n");

    /* open contents of array1 */
    for (i = 0; i <= 2; i++)
    {
        printf("array1[ %d ] = %d ", i, array1[i]);
    }

    printf("\nValues on exiting staticArrayInt:\n");

    /* Modify and output contents of array1*/
    for (i = 0; i <= 2; i++)
    {
        printf("array1[ %d ] = %d ", i, array1[i] += 5);
    }

} /* end function staticArrayInit */

/* function to demonstrate an automatic local array */
void automaticArrayInit(void)
{
    /* initizliaes elements each time function is called */
    int array2[3] = { 1, 2, 3 };
    int i; /* counter */

    printf("\n\nValues on entering automaticArrayInit:\n");

    /* output contents of array 2 */
    for (i = 0; i <= 2; i++)
    {
        printf("array2[ %d ] = %d", i, array2[i]);
    }

    printf("\nValues on exiting automaticArrayInit:\n");

    /* modify and output contents of array2 */
    for (i = 0; i <= 2; i++)
    {
        printf("array2[ %d ] = %d ", i, array2[i] += 5);
    }
} /* end function automaticArrayInit */
