/* Filename: 04_27_pythagoreanTriples.c
   Title:  Pythagorean Triples
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 11, 2020
   Notes: A right triangle can have sides that are all integers. The set of
          three integer values for the sides of a right triangle is called a
          Pythagorean triple. These three sides must satisfy the relationship
          that the sum of the squares of two of the sides is equal to the square
          of the hypotenuse. Find all Pythagorean triples for side1, side2, and
          the hypotenuse all no larger than 500. Use a triple-nested for loop
          that simple tries all possibilities. This is an example of "brute-force"
          computing. Its not aesthetically pleasing to many people. But there
          are many reasons why these techniques are important. First, with
          computing power increasing at such a phenomenal pace, solutions that
          would have taken years or even centuries of computer time to produce
          with the technology of just a few years ago can now be produced in
          hours, minutes or even seconds. Recent microprocessor chips can
          process a billion instructions per second! Second, as you'll learn in
          more advanced computer science course, there are a large number of
          interesting problems for which there's no known algorithm approach
          other than sheer brute force. We investigate many kinds of
          problem-solving methodologies in this book. We'll consider many
          brute-force approaches to various interesting problems. 
*/

#include <stdio.h>
#include <math.h>

int main(void)
{

    /* Variables */
    int legA;
    int legB;
    int hypotenuse;
    int const MAX = 500;    // Max value allowed for sides

    /* Use triple for loop to test all values */
    for (legA = 3; legA < MAX; legA++)
            {
                for (legB = 4; legB < MAX; legB++)
                {
                    for (hypotenuse = 5; hypotenuse < MAX; hypotenuse++)
                    {
                        /* Compute Pythagorean Theorem */
                        if (legA * legA + legB * legB == hypotenuse * hypotenuse)
                        {
                            printf("(%d, %d, %d), ", legA, legB, hypotenuse);
                        }
                    }
                }
            }
    return 0;
} /* End main function */