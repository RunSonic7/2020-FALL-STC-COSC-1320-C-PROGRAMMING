/* Filename: 07_06_callByValue.c
   Title:  Cube a variable using call-by-value

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 22, 2020
   Notes: Fig. 7.6: fig07_06.c
*/
#include <stdio.h>

int cubeByValue(int n); /* prototype */

int main(void)
{
    int number = 5; /* initialize number */

    printf("The original value of number is %d", number);

    /* pass number by value to cubeByValue */
    number = cubeByValue(number);
    printf("\nThe new value of number is %d\n", number);

    return 0; /* indicates successful termination */
} /* end main */

/* calculate and return cube of integer arguement */
int cubeByValue(int n)
{
    return n * n * n;   /* cube local variable n and return result */
} /* end function cubeByValue */
