/* Filename: 05_09_parkingCharges.c
   Title:  Parking Charges

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due: Sunday, October 25, 2020
   Notes: A parking garage charges a $2.00 minimum fee to park for up to three
          hours and additional $0.50 per hour over three hours. The maximum
          charge for any given 24-hour period is $10.00. Assume that no car
          parks for longer than 24 hours at a time. Write a program that will
          calculate and print the parking charges for each of three customers
          who parked their cars in this garage yesterday. You should enter the
          hours parked for each customer. Your program should print the results
          in a tabular format, and should calculate and print the total of
          yesterday's receipts. The program should use the function
          calculateCharges to determine the charge for each customer. Your
          output should display the car #, the hours entered and the total charge.
*/
#include <stdio.h>

float calculateCharges(float);

int main(void)
{
    /* Variables */
    float totalCharge1,
        totalCharge2,
        totalCharge3,
        totalChargeAll,
        hoursParked,
        hoursParked1,
        hoursParked2,
        hoursParked3;
    const int NUM_DRIVERS = 3;

    /* Prompt user to input informatin */
    for (int index = 1; index <= NUM_DRIVERS; index++)
    {
        printf("Driver %d\nHow may hours did you park for? (Max 24 hours): ", index);
        scanf("%f", &hoursParked);

        switch (index)
        {
        case 1:
            totalCharge1 = calculateCharges(hoursParked);
            hoursParked1 = hoursParked;
            break;
        case 2:
            totalCharge2 = calculateCharges(hoursParked);
            hoursParked2 = hoursParked;
            break;
        case 3:
            totalCharge3 = calculateCharges(hoursParked);
            hoursParked3 = hoursParked;
            break;
        default:
            break;
        }
    }

    /* Calculate Total Charge */
    totalChargeAll = totalCharge1 + totalCharge2 + totalCharge3;

    /* Display info to User */
    printf("\n\n----- YESTERDAY'S RECEIPTS -----\n"
        "Car Number  Hours Parked  Total Charges\n"
        "%-10d\t%8.2f%15.2f\n"
        "%-10d\t%8.2f%15.2f\n"
        "%-10d\t%8.2f%15.2f\n",
        1, hoursParked1, totalCharge1, 2, hoursParked2, totalCharge2, 3, hoursParked3, totalCharge3);
        printf("\nTotal Day Charges: $ %.2f\n", totalChargeAll);
}

float calculateCharges(float hours)
{
    /* Variables */
    const float BASE_CHARGE = 3.0;
    const float HOURLY_RATE = 0.5;
    const int HOUR_MAX_BASE = 3;

    /* Calculate charges */
    if (hours <= HOUR_MAX_BASE)
    {
        return BASE_CHARGE;
    }
    else
    {
        return BASE_CHARGE + (hours * HOURLY_RATE);
    }


}