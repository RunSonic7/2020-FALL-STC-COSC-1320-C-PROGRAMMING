/* Filename: 03_17_creditLimitCalc.c
   Title:  Credit-Limit Calculator
   
   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, September 27, 2020
   Notes: Develop a C program that will determine whether a department store 
          customer has exceeded the credit limit on a charge account. For each 
          customer, the following facts are available:

            Account number (4 digits)
            Balance at the beginning of the month
            Total of all items charges by this customer this month
            Total of all credits applied to this customer's account this month
            Allowed credit limit

          The program should input each fact, calculate the balance 
          (=balance + charges - credits), and determine whether the new balance 
          exceeds the customer's credit limit. For those customers whose credit 
          limit is exceeded, the program should display the customer's account 
          number, credit limit, new balance and the message "Credit limit exceeded." 
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /* Variables */
    int acctNo;
    float startingMonthBalance,
        appliedAsAcctCharges,
        appliedAsAcctCredits,
        updatedBalance,
        cardCreditLimit;
    bool limitExceeded = false,
         isValid = true;

    /* Ask User for necessary information */
    printf("Please enter the following required information:\n");

    do
    {
        printf("Account Number (Enter -1 to Exit): ");
        scanf("%i", &acctNo);

        /* Validate User Input */
        if (acctNo == 0 || acctNo <= -2)
        {
            printf("\nSorry, that is not a valid account number.\n\n");
        }
    } while (acctNo == 0 || acctNo <= -2);

    /* Continue with questioning */
    while (acctNo != -1)
    {
        /* Ask for starting month balance and validate */
        do
        {
            isValid = true;

            printf("\nEnter Starting Month Balance: $");
            scanf("%f", &startingMonthBalance);

            if (startingMonthBalance < 0)
            {
                printf("Sorry, that is not a valid entry. Please Re-enter.\n\n");
                isValid = false;
            }
        } while (isValid == false);

        /* Ask for monthly charges and validate */
        do
        {
            isValid = true;

            printf("Enter total charges: \t$");
            scanf("%f", &appliedAsAcctCharges);

            if (appliedAsAcctCharges < 0)
            {
                printf("Sorry, that is not a valid entry. Please Re-enter.\n\n");
                isValid = false;
            }
        } while (isValid == false);

        /* Ask for monthly credits and validate */
        do
        {
            isValid = true;

            printf("Enter total credits: \t$");
            scanf("%f", &appliedAsAcctCredits);

            if (appliedAsAcctCredits < 0)
            {
                printf("Sorry, that is not a valid entry. Please Re-enter.\n\n");
                isValid = false;
            }
        } while (isValid == false);

        /* Ask for card limit and validate */
        do
        {
            isValid = true;

            printf("Enter credit limit: \t$");
            scanf("%f", &cardCreditLimit);

            if (cardCreditLimit < 0)
            {
                printf("Sorry, that is not a valid entry. Please Re-enter.\n\n");
                isValid = false;
            }
        } while (isValid == false);

        /* Calculate if credit limit exceeded */
        updatedBalance = startingMonthBalance + appliedAsAcctCharges - appliedAsAcctCredits;

        if (updatedBalance > cardCreditLimit)
        {
            limitExceeded = true;
        }

        /* Display Info to user */
        printf("\n\n--- CURRENT STATEMENT INFORMATION ---\n");
        printf("Account:\t%i\n", acctNo);
        printf("Credit Limit: \t$%.2f\n", cardCreditLimit);
        printf("Balance:\t$%.2f\n", updatedBalance);

        if (limitExceeded == true)
        {
            printf("!!! Credit Limit Exceeded !!!\n\n");
        }

        /* Ask for next account information */
        do
        {
            printf("\n\nAccount Number (Enter -1 to Exit): ");
            scanf("%i", &acctNo);

            /* Validate User Input */
            if (acctNo == 0 || acctNo <= -2)
            {
                printf("\nSorry, that is not a valid account number.\n\n");
            }
        } while (acctNo == 0 || acctNo <= -2);
    }

    return 0;
}