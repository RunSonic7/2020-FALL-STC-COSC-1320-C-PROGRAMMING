/* Filename: 02_13_equalityAndRelationalOperators.c
   Title: Using Equality and Relational Operators
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Date: Wednesday, September 2, 2020
   Due: Sunday, September 6, 2020
   Notes: Fig. 2.13
*/

#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
	int num1;	/* First number to be read from user */
	int num2;	/* Second number to be read from user */

	/* Read two integers */
	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf("%d%d", &num1, &num2);

	/* Analysis of the user input */

	/* Equality */
	if (num1 == num2) {
		printf("%d is equal to %d\n", num1, num2);
	} /* End if */

	/* Inquality */
	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	} /* End if */
	
	/* Less Than */
	if (num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
	} /* End if */

	/* Greater Than */
	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	} /* End if */

	/* Less than or Equal To */
	if (num1 <= num2) {
		printf("%d is less than or equal to %d\n", num1, num2);
	} /* End if */

	/* Greater than or Equal To */
	if (num1 >= num2) {
		printf("%d is greater than equal to %d\n", num1, num2);
	} /* End if */

	return 0; /* Indicate that program ended successfully */

} /* End function main*/


	


