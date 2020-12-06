/* Filename: 07_04_usingPtrOperators
   Title:  Using the & and * operators 
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 22, 2020
   Notes: Fig. 7.4: fig07_04.c
*/

#include <stdio.h>

int main(void)
{
    int a;  /* a is an integer */
    int* aPtr; /* aPtr is a pointer to an integer */

    a = 7;
    aPtr = &a; /* aPtr set to address of a */

    printf("The address of a is %p"
        "\nThe value of a Ptr is %p", &a, aPtr);

    printf("\n\nThe value of a is %d"
        "\nThe value of *aPtr is %d", a, *aPtr);

    printf("\n\nShowing that * and & are complements of "
        "each other\n&*aPtr = %p"
        "\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0; /* indicates successful termination */
} /* end main */