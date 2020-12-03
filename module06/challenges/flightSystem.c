/* Filename: flightSystem.c
   Title:  Flight Reservation System
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, November 15, 2020
   Notes: 6.21 (Airline Reservation System) A small airline has just purchased 
          a computer for its new automated reservation system. The president has
          asked you to program the new system. You'll write a program to assign
          seats on each flight of the airline's only plane (capacity 10 seats).

          Your program should display the following menu of alternatives:

            Please type 1 for "first class"
            Please type 2 for "economy"

          If the person types 1, then your program should assign a seat in the 
          first class section (seats 1-5). If the person types 2, then your
          program should assign a seat in the economy section (seats 6-10). Your
          program should then print a boarding pass indicating the person's seat
          number and whether it's in the first class or economy section of the
          plane.

          Use a one-dimensional array to represent the seating chart of the
          plane, initialize all the elements of the array to 0 to indicate that
          all seats are empty. As each seat is assigned, set the corresponding
          element of the array to 1 to indicate that the seat is no longer
          available.

          Your program should, of course, never assign a seat that has already
          been assigned. When the first class section is full, your program
          should ask the person if it is acceptable to be placed in the economy
          section (and vice versa). If yes, then make the appropriate seat
          assignment. If no, then print the message "Next flight leaves in 3 hours."
*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
#define FC 4
#define ECO 9

void title(void);
void selectionPrompt(void);
bool verifyAvailability(int[], int);
void printTicket(int, int);

int main(void)
{
    /* Variables */
    int seatingChart[SIZE] = { 0 };
    int userChoice;
    int userSecondChoice;
    int classType;

    /* Program Title */
    title();

    do
    {
        selectionPrompt(); /* Prompt options */
        scanf("%d", &userChoice);

        /* Validate user Input */
        while (userChoice != 1 && userChoice != 2 && userChoice != 3)
        {
            printf("\nInvalid Input. Please re-enter value.\n");
            selectionPrompt();
            scanf("%d", &userChoice);
        }

        /* Variables for seat booking */
        classType = userChoice;
        bool isAvailable;
        int positionOpen;
        // Check system for seat options
        switch (userChoice)
        {
        case 1:
            printf("=== FIRST CLASS SYSTEM ===\n");

            // Check if available
            for (int i = 0; i <= FC; i++)
            {
                if (seatingChart[i] == 0)
                {
                    isAvailable = true;
                    positionOpen = i;
                    break;
                }
                isAvailable = false;
            }

            if (isAvailable == false)
            {
                printf("No First Class Available!\n"
                    "Would you like a ticket in Economy?\n\n");


                printf("[1] Yes\n[2] No\n\nChoice: ");
                scanf("%d", &userSecondChoice);

                while (userSecondChoice != 1 && userSecondChoice != 2)
                {
                    printf("\nInvalid Input. Please re-enter value.\n");
                    printf("No First Class Available!\n"
                        "Would you like a ticket in Economy?\n\n");

                    printf("[1] Yes\n[2] No\n\nChoice: ");
                    scanf("%d", &userSecondChoice);
                }

                /* Check Economy here */
                if (userSecondChoice == 2)
                {
                    printf("The next plane leaves in 3 hours.\n");
                }
                else
                {
                    /* Perform First Class Check Here */
                    for (int i = FC + 1; i <= ECO; i++)
                    {
                        if (seatingChart[i] == 0)
                        {
                            isAvailable = true;
                            positionOpen = i;
                            break;
                        }
                        isAvailable = false;
                    }

                    /* Book ticket */
                    if (isAvailable == false)
                    {
                        printf("No more tickets. The next plane leaves in 3 hours.\n");
                    }
                    else
                    {
                        /* Book Ticket */
                        seatingChart[positionOpen] = 1;
                        printTicket(positionOpen + 1, classType);
                    }
                }
            }
            else
            {
                /* Mark Seat */
                seatingChart[positionOpen] = 1;
                printTicket(positionOpen + 1, classType);
            }
            break;
        case 2:
            printf("=== ECONOMY SYSTEM ===\n");
            for (int i = FC + 1; i <= ECO; i++)
            {
                if (seatingChart[i] == 0)
                {
                    isAvailable = true;
                    positionOpen = i;
                    break;
                }
                isAvailable = false;
            }

            if (isAvailable == false)
            {
                printf("No Economy Available!\n"
                    "Would you like a ticket in First Class?\n\n");

                printf("[1] Yes\n[2] No\n\nChoice: ");
                scanf("%d", &userSecondChoice);

                while (userSecondChoice != 1 && userSecondChoice != 2)
                {
                    printf("\nInvalid Input. Please re-enter value.\n");
                    printf("No Economy Available!\n"
                        "Would you like a ticket in First Class?\n\n");

                    printf("[1] Yes\n[2] No\n\nChoice: ");
                    scanf("%d", &userSecondChoice);
                }

                /* Check First Class */
                if (userSecondChoice == 2)
                {
                    printf("The next plane leaves in 3 hours.\n");
                }
                else
                {
                    for (int i = 0; i <= FC; i++)
                    {
                        if (seatingChart[i] == 0)
                        {
                            isAvailable = true;
                            positionOpen = i;
                            break;
                        }
                        isAvailable = false;
                    }

                    if (isAvailable == false)
                    {
                        printf("No more tickets. The next plane leaves in 3 hours.\n");
                    }
                    else
                    {
                        /* Book ticket */
                        seatingChart[positionOpen] = 1;
                        printTicket(positionOpen + 1, classType);
                    }
                }
            }
            else
            {
                /* Mark Seat */
                seatingChart[positionOpen] = 1;
                printTicket(positionOpen + 1, classType);
            }
            break;
        default:
            break;
        }

        /* Print array - Testing Marks */
        /*printf("Chart: ");
        for (int i = 0; i < 10; i++)
        {
            printf("  %d|%d  ", i + 1, seatingChart[i]);
        }

        // Print array
        printf("\nArray: ");
        for (int i = 0; i < 10; i++)
        {
            printf("  %d|%d  ", i, seatingChart[i]);
        }*/
    } while (userChoice != 3);
    return 0;
}

void title(void)
{
    printf("+==========================================+\n"
    "| WELCOME TO C AIRLINES RESERVATION SYSTEM |\n"
    "+==========================================+\n\n");
}

void selectionPrompt(void)
{
    printf("\nPlease select a seat type:\n"
        "[1] First Class\n"
        "[2] Economy Class\n"
        "[3] Exit System\n\n"
        "Your option: ");
}

void printTicket(int seatNo, int class)
{
    printf("+----------------------------------------------+\n"
        "| B D   P |  AIRLINE: C AIRLINES               |\n"
        "| O I   A |                                    |\n"
        "| A N   S |  CLASS: %d                          |\n"
        "| R G   S |  SEAT NO: %d                        |\n"
        "+----------------------------------------------+\n", class, seatNo);
}

