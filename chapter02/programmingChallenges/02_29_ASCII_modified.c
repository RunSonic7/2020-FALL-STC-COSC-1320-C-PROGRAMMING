/* Filename: 02_29_ASCII_modified.c
   Title:  ASCII Modified by Instructor
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 13, 2020 by 11:59PM CDT
   Notes: Here's a peek ahead. In this chapter you learned about integers and 
          the type int. C can also represent uppercase letters, lowercase 
          letters and a considerable variety of special symbols. C uses small 
          integers internally to represent each different character. C uses 
          small integers internally (ASCII) to represent each different 
          character. The set of characters a computer uses together with the 
          corresponding integer representations for those characters is called 
          that computer's character set. You can print the integer equivalent 
          of uppercase A, for example, by executing the statement below.  
          Another example is given on the next line.

             printf("%d",'A');

            printf("%d %d",'A','B');

          Write a C program that prints your name in ASCII representation.
*/

#include <stdio.h>

int main(void) 
{
   // First Name \n Last Name \n Suffix
   printf("%d %d %d %d",'J','u','a','n'),
   printf("\n");
   printf("%d %d %d %d %d %d %d",'M','i','r','e','l','e','s'),
   printf("\n");
   printf("%d %d",'I','I');

   return 0;
} /* End of Function Main */
