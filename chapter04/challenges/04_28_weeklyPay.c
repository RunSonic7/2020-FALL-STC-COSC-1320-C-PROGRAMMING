/* Filename: 04_28_weeklyPay.c
   Title:  Calculating Weekly Pay
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 11, 2020
   Notes: A company pays its employees as managers (who receive a fixed weekly
          salary), hourly workers (who receive a fixed hourly wage for up to the
          first 40 hours they work and "time-and-a-half"--i.e.,1.5 times their
          hourly wage--for overtime worked over 40 hours), commission workers
          (who receiver $250 plus 5.7% of their gross weekly sales), or
          pieceworkers (who receive a fixed amount of money for each of the
          items they produce--each pieceworker in this company works on only one
          type of item).  Write a program to compute the weekly pay for each
          employee. You do not know the number of employees in advanced (maybe
          make a menu for the user). Each type of employee has it's own pay
          code: Managers have paycode 1, hourly workers have paycode 2,
          commission workers have code 3 and pieceworkers have code 4. Use a
          switch statement to compute each employee's pay based on their
          employee's paycode. Within the switch prompt the user (.i.e the
          payroll clerk) to enter the appropriate facts for your program needs
          to calculate each employee's pay based on that employee's paycode.

          [Note: You can input values of type double using the conversion
          specifier $lf with scanf.]
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Variables */
    const double OT_MULTIPLIER = 1.5;
    const double COMMISSION_PERCENTAGE = 0.057;
    const double COMMISSION_BASE = 250;

    int userInput;
    double hoursWorked;
    double payRateReg;
    double payRateOT;
    double otHours;
    double otWages;

    double commissionSales;
    double commissionNetPay;

    int numOfPieces;
    double payPerPiece;

    double totalWages;

    printf("+------------------------------------+\n"
           "|           Pay Calculator           |\n"
           "+------------------------------------+\n\n");

    do
    {
        /* Main Menu */
        printf("+------------------------------------+\n"
               "|             Main Menu              |\n"
               "+------------------------------------+\n\n");

        /* Prompt user to select a Pay Code */
        printf("Select a Pay Code\n\n"
               "1. Manager\n"
               "2. Hourly Wage\n"
               "3. Comission Based Wage\n"
               "4. Pieceworkers\n"
               "5. Exit\n\n");

        do
        {
            /* Take user input and validate */
            printf("Please enter an option: ");
            scanf("%d", &userInput);

            if (userInput < 1 || userInput > 5)
            {
                printf("Your entry was invalid.\n");
            }
        } while (userInput < 1 || userInput > 5);

        /* Display appropriate Pay Menu per Pay code */
        switch (userInput)
        {
        case 1:
            printf("+------------------------------------+\n"
                   "|          PayCode: Manager          |\n"
                   "+------------------------------------+\n\n");

            printf("Enter the requested information\n"
                   "Hours Worked: ");
            scanf("%lf", &hoursWorked);

            printf("Pay rate per hour: $ ");
            scanf("%lf", &payRateReg);

            /* Determine if overtime, then calculate earnings */
            if (hoursWorked > 40)
            {
                otHours = hoursWorked - 40;
                payRateOT = payRateReg * OT_MULTIPLIER;
                otWages = otHours * payRateOT;
                totalWages = (40 * payRateReg) + otWages;

                printf("\n--- EXPECTED PAYCHECK AMOUNT ---\n"
                       "Regular Hours: %d\n"
                       "Hourly Wage: $ %.2lf\n"
                       "Reg rate Wages: $ %.2lf\n\n"
                       "OT Hours: %f\n"
                       "OT Rate: $ %.2lf\n"
                       "OT Wages: $ %.2lf\n\n"
                       "Total wages: $ %.2lf\n\n",
                       40, payRateReg, payRateReg * 40, otHours, payRateOT, otWages, totalWages);
            }
            else
            {
                totalWages = hoursWorked * payRateReg;
                printf("\nTotal wages: $ %.2lf\n\n", totalWages);
            }
            break;
        case 2:
            printf("+------------------------------------+\n"
                   "|          PayCode: Hourly           |\n"
                   "+------------------------------------+\n\n");
            printf("Enter the requested information\n"
                   "Hours Worked: ");
            scanf("%lf", &hoursWorked);

            printf("Pay rate per hour: $ ");
            scanf("%lf", &payRateReg);

            /* Determine if overtime, then calculate earnings */
            if (hoursWorked > 40)
            {
                otHours = hoursWorked - 40;
                payRateOT = payRateReg * OT_MULTIPLIER;
                otWages = otHours * payRateOT;
                totalWages = (40 * payRateReg) + otWages;

                printf("\n--- EXPECTED PAYCHECK AMOUNT ---\n"
                       "Regular Hours: %d\n"
                       "Hourly Wage: $ %.2lf\n"
                       "Reg rate Wages: $ %.2lf\n\n"
                       "OT Hours: %f\n"
                       "OT Rate: $ %.2lf\n"
                       "OT Wages: $ %.2lf\n\n"
                       "Total wages: $ %.2lf\n\n",
                       40, payRateReg, payRateReg * 40, otHours, payRateOT, otWages, totalWages);
            }
            else
            {
                totalWages = hoursWorked * payRateReg;
                printf("\nTotal wages: $ %.2lf\n\n", totalWages);
            }
            break;
        case 3:
            printf("+------------------------------------+\n"
                   "|         PayCode: Commission        |\n"
                   "+------------------------------------+\n\n");
            printf("Enter the requested information\n"
                   "Amount of Weekly Sales: $ ");
            scanf("%lf", &commissionSales);

            /* Calculate wages */
            commissionNetPay = COMMISSION_PERCENTAGE * commissionSales;
            totalWages = COMMISSION_BASE + commissionNetPay;

            /* Display to user */
            printf("\n--- EXPECTED PAYCHECK AMOUNT ---\n"
                   "Base Pay: $ %.2f\n"
                   "Sales made: $ %.2f\n"
                   "Commission on Sales: $ %.2f\n\n"
                   "Total wages: $ %.2f\n",
                   COMMISSION_BASE, commissionSales, commissionNetPay, totalWages);
            break;
        case 4:
            printf("+------------------------------------+\n"
                   "|        PayCode: Pieceworkers       |\n"
                   "+------------------------------------+\n\n");
            printf("Enter the requested information\n"
                   "Number of pieces completed: ");
            scanf("%d", &numOfPieces);
            printf("Pay per piece: $ ");
            scanf("%lf", &payPerPiece);

            /* Calculate Total Wages */
            totalWages = numOfPieces * payPerPiece;

            /* Display to user */
            printf("\n--- EXPECTED PAYCHECK AMOUNT ---\n"
                   "Total wages: $ %.2f\n",
                   totalWages);
            break;
        case 5:
            printf("Have a nice day!\n");
        default:
            break;
        }
    } while (userInput != 5); /* Loop until user enters 5 */
    return 0;
}
