/* Filename: 03_44_rightTriangle.c
   Title:  Right Triangle Verifier
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 27, 2020
   Notes: Write a program that read three nonzero integers and determines and prints whether they could represent the 
          sides of a right triangle.
*/

#include <stdio.h>
#include <stdbool.h>    /* Required library to use bool */

int main(void)
{
    /* Variables */
    float inputValue1,
        inputValue2,
        inputValue3,
        largestSide,
        calculatedLargestSide,
        legA,
        legB;
    bool isValid = true;

    do
    {
        isValid = true; /* Validater for Input */

        /* Ask user for three numbers */
        printf("Please enter the three lengths of the sides of the triangle separated by a space (ex. 6 8 10):  ");
        scanf("%f %f %f", &inputValue1, &inputValue2, &inputValue3);

        if (inputValue1 <= 0)
        {
            printf("The first value you entered is invalid.\n");
            isValid = false;
        }
        if (inputValue2 <= 0)
        {
            printf("The second value you entered is invalid.\n");
            isValid = false;
        }
        if (inputValue3 <= 0)
        {
            printf("The third value you entered is invalid.\n");
            isValid = false;
        }

        if (isValid == false)
        {
            printf("Please re-enter the lengths of the sides of your triangle.\n\n");
        }
    } while (isValid == false);

    /* Determine largest side */
    /* Check One side , then other two are less and will be legs */
    /* Check inputValue 1 */
    if (inputValue1 > inputValue2 && inputValue1 > inputValue3)
    {
        largestSide = inputValue1;
        legA = inputValue2;
        legB = inputValue3;
    }
    /* Check inputValue 2 */
    else if (inputValue2 > inputValue1 && inputValue2 > inputValue3)
    {
        largestSide = inputValue2;
        legA = inputValue1;
        legB = inputValue3;
    }
    /* Input Value 3 as last case */
    else
    {
        largestSide = inputValue3;
        legA = inputValue1;
        legB = inputValue2;
    }

    /* Determine if a right triangle using Pythagorean Theorem */
    /* and display determination to user */
    calculatedLargestSide = (legA * legA) + (legB * legB);
    largestSide *= largestSide; /* largestSide * largestSide */

    if (calculatedLargestSide == largestSide)
    {
        printf("\nThe values entered form a right triangle.\n");
    }
    else
    {
        printf("\nThe values entered do not form a right triangle.\n");
    }

    return 0;
}
