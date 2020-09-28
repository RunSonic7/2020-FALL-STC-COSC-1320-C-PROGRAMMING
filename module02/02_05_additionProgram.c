/* Filename: 02_05_additionProgram.c 
   Title: Addition Program
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Date: Wednesday, September 2, 2020
   Due: Sunday, September 6, 2020
   Notes: Fig 2.5
*/

#include <stdio.h>

/* Funtion main begins program execution */
int main(void)
{
	int integer1;	/* First number to be input by user */
	int integer2;	/* Second number to be input by user */
	int sum;	/* Variable in which sum will be stored */

	printf("Enter first integer\n");	/* Prompt */
	scanf("%d", &integer1);			/* Read an integer */

	printf("Enter second integer\n");	/* Prompt */
	scanf("%d", &integer2);			/* Read an integer */

	sum = integer1 + integer2;		/* Assign total to sum */

	printf("Sum is %d\n", sum);		/* Print sum */

	return 0;  /* Indicate that program ended successfully */
} /* End function main */
