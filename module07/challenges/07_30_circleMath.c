/* Filename: 07_30_circleMath.c
   Title:  Calculating Circle Circumference, Circle Area of Sphere Volume
           Using Function Pointers

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due:
   Notes: 7.30 Use the techniques you learned in Fig. 7.28, create a text-based,
          menu-driven program that allows the user to choose whether to
          calculate the circumference of a circle, the area of a circle or the
          volume of a sphere. The program should then input a radius from the
          user, perform the appropriate calculation and display the result. Use
          an array of function pointers in which each pointer represents a
          function that returns void and receives a double parameter. The
          corresponding functions should each display message indicating which
          calculations was performed, the value of the radius and the result of
          the operation.
*/
#include <stdio.h>
#include <tgmath.h>

/* prototypes */
void optionMenu();
void circumference(double rad);
void area(double rad);
void volume(double rad);

int main(void)
{
    /* variables and initialize items*/
    int userChoice;
    double radius;
    void (*calculate[3])(double) = { circumference, area, volume };

    do
    {
        optionMenu(); /* display options to user */
        scanf("%d", &userChoice); /* read user choice */

        while (userChoice < 1 || userChoice > 4)
        {
            printf("Invalid input. Please Try Again\n\n");
            optionMenu();
            scanf("%d", &userChoice); /* read user choice */
        }

        if (userChoice == 4) /* exit program if 4, else run option */
        {
            printf("Exit Program\n");
            break;
        }
        else
        {
            printf("Enter a radius value: ");
            scanf("%lf", &radius);

            (*calculate[userChoice - 1])(radius);
        }
    } while (userChoice != 4);
    return 0;
}

/* functions */
void optionMenu()
{
    printf("Please select an option\n"
        "[1] Circumference of Circle\n"
        "[2] Area of Circle\n"
        "[3] Volume of Sphere\n"
        "[4] Exit\n\nInput Option: ");
}

void circumference(double rad)
{
    printf("\nCircumference: %lf\n\n\n", 2 * rad * M_PI);
}

void area(double rad)
{
    printf("\nArea: %lf\n\n\n", pow(rad, 2) * M_PI);
}

void volume(double rad)
{
    printf("\nVolume: %lf\n\n\n", 4 * M_PI * pow(rad, 3) / 3);
}