/* Filename: 02_19_calculations.c
   Title:  Calculations
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 13, 2020
   Notes: Write a program that inputs three different integers from the keyboard
          then prints the sum, the average and the product. The screen dialog 
          should appear as follows:

    Input three different integers: 13 27 14
    Sum is 54
    Average is 18
    Product is 4914

    Extra from book: Find Smallest and Largest number
    Smallest is 13
    Largest is 27
*/

#include<stdio.h>

int main(void) 
{
    int userInput1,
        userInput2,
        userInput3,
        sum,
        average,
        product,
        largest,
        smallest;

    printf("Please enter 3 numbers (integers)\nSeparate each number by a space: ");
    scanf("%d%d%d", &userInput1, &userInput2, &userInput3);

    /* Perform Calculations for sum, average, product */
    sum = userInput1 + userInput2 + userInput3;
    product = userInput1 * userInput2 * userInput3;
    average = sum / 3;

    /* Consider rounding on average */
    if (sum % 3 >= 0.5) 
    {
        average = average + 1;
    }

    /* Determine largest/smallest number */
    /* Need to work on */
    

    /* Display results to user */
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);

    return 0; /* Indicate that the program ended successfully */
} /* End function main */
