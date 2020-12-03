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
        // Check system for seat options
        switch (userChoice)
        {
        case 1:
            printf("=== FIRST CLASS SYSTEM ===\n");
            // Check if available
            bool isAvailable;
            int positionOpen;

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
                printf("No First Class Available!\n");
            }
            else
            {
                // Mark Seat
                seatingChart[positionOpen] = 1;
            }



            break;
        case 2:
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
                printf("No Economy Available!\n");
            }
            else
            {
                // Mark Seat
                seatingChart[positionOpen] = 1;
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
        "| A N   S |  CLASS: %d                        |\n"
        "| R G   S |  SEAT NO: %d                      |\n"
        "+----------------------------------------------+\n", class, seatNo);
}

/* Source
Strings https://www.geeksforgeeks.org/strings-in-c-2/ */