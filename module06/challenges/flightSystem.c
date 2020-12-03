#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
#define FC 4
#define ECO 9

void selectionPrompt();
bool verifyAvailability(int[], int);
void printTicket(int, int);

int main(void)
{
    int seatingChart[SIZE] = { 0 };
    int userChoice;
    int userSecondChoice;
    int classType;
    do
    {
        selectionPrompt();

        scanf("%d", &userChoice);

        while (userChoice != 1 && userChoice != 2 && userChoice != 3)
        {
            printf("\nInvalid Input. Please re-enter value.\n");
            selectionPrompt();
            scanf("%d", &userChoice);
        }

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

                // Check Economy here
                if (userSecondChoice == 2)
                {
                    printf("The next plane leaves in 3 hours.\n");
                }
                else
                {
                    // perform check here
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

                    // book ticket
                    if (isAvailable == false)
                    {
                        printf("No more tickets. The next plane leaves in 3 hours.\n");
                    }
                    else
                    {
                        // Book Ticket
                        seatingChart[positionOpen] = 1;
                        printTicket(positionOpen + 1, classType);
                    }
                }
            }
            else
            {
                // Mark Seat
                seatingChart[positionOpen] = 1;
                printTicket(positionOpen + 1, classType);
            }
            break;
        case 2:
            printf("=== ECONOMY SYSTEM ===");
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

                // Check FC Here
                if (userChoice == 2)
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
                        // book ticket
                        seatingChart[positionOpen] = 1;
                        printTicket(positionOpen + 1, classType);
                    }
                }




            }
            else
            {
                // Mark Seat
                seatingChart[positionOpen] = 1;
                printTicket(positionOpen + 1, classType);
            }
            break;
        default:
            break;
        }

        // Print array
        printf("Chart: ");
        for (int i = 0; i < 10; i++)
        {
            printf("  %d|%d  ", i + 1, seatingChart[i]);
        }

        // Print array
        printf("\nArray: ");
        for (int i = 0; i < 10; i++)
        {
            printf("  %d|%d  ", i, seatingChart[i]);
        }
    } while (userChoice != 3);
    return 0;
}

void selectionPrompt(void)
{
    printf("Please select a seat type:\n"
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