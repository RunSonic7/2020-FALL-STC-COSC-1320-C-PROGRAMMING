/* Filename: 07_07_passByReference.c
   Title:  Cube a variable using call-by-reference
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 22, 2020
   Notes: Fig. 7.7: fig07_07.c
*/
#include <stdio.h>

void cubeByReference(int *nPtr); /* prototype */

int main(void)
{
    int number = 5; /* initialize number */

    printf("The original value of number is %d", number);
    
    /* pass address of number to cubeByReference */
    cubeByReference(&number);

    printf("\nThe new value of number is %d\n", number);

    return 0; /* indicates successful termination */
} /* end main */

/* calculate cube of *nPtr; modifies variable number in main */
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* cube *nPtr */
}

