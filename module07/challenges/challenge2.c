/* Filename:
   Title:

   Name: Juan Mireles II
   Course: COSC 1320.V01 - C Programming
   Term: Fall 2020
   Institution: South Texas College
   Instructor: Mr. Joseph Perez
   Due:
   Notes: 7.32 (Polling) The Internet and the web are enabling more people to
          network, join a cause, voice opinions, and so on. The U.S.
          presidential candidates in 2008 used the Internet intensively to get
          out their messages and raise money for their campaigns. In this
          exercise, you'll write a simple polling program that allows users to
          rate five social-consciousness issues from 1 (least important) to 10
          (most important). Pick five causes that are important to you
          (e.g. political issues, global environmental issues). Use a
          one-dimensional arrays topics (of type char *) to store the five
          causes. To summarize the survey responses, use a 5-row, 10-column
          two-dimensional array responses (of type in), each row corresponding
          to an element in the topics array. When the program runs, it should
          ask the user to rate each issue. Have your friends and family respond
          to the survey. Then have the program display a summary of the results,
          the program in the book doesn't specify the following BUT you should
          just have the program ask if there is another survey to be done and
          continue if there is another survey). The report should include:

            a. A tabular report with the five topics down the left side and the
               10 ratings across the top, listing in each column and the number
               of ratings received for each topic.
            b. To the right of each row, show the average of the rating for that
               issue.
            c. Which issue received the highest point total? Display both the
               issue and the point total.
            d. Which issue received the lowest point total? Display both the
               issue and the point total.
    Reference: Flush Input
               https://www.tutorialspoint.com/clearing-input-buffer-in-c-cplusplus
*/
#include <stdio.h>

void printReport(char* array[], char* marks[], int score[][10], int numSurvey);
int determineNumberOfTopics(char* array[]);

double calculateAverageRating(int ratings[][10], int noOfSurvey, int index);
void determineMax(int arrayReponses[5][10], int* maximum, int* position);

int main(void)
{
    int fflush(FILE * stream); /* to flush scanf to take input */

    /* Variables */
    char* headers[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Avg Rating" };
    char* topics[] = {
        "Medicare-For-All",
        "LGBT+ Equal Rights",
        "Universal Basic Income",
        "Free College (4 Yr)",
        "DACA"
    };

    int responses[5][10] = { 0 };
    char yesNo;
    int numberOfSurveys = 0;
    int userRating;
    int maxPosition = 0;
    int maxTallyAmount = 0;
    int minTallyAmount = 0;
    int minPosition = 0;

    printf("===== C POLLING SURVEY =====\n");
    do
    {
        printf("Please rate the following topics from 1 (least important) to 10 (most important).\n\n");

        /* present questions to user */
        for (int i = 0; i < 5; i++)
        {
            printf("\n%s\n", topics[i]);

            printf("Your rating 1 (least important) to 10 (most important): ");
            scanf("%d", &userRating);

            while (userRating < 1 || userRating > 10)
            {
                printf("\nYour input was not valid. Please try again.\n");

                printf("Your rating 1 (least important) to 10 (most important): ");
                scanf("%d", &userRating);
            }

            /* Store choices in array. */
            responses[i][userRating - 1]++;

        }
        numberOfSurveys++;
        printf("\nWould you like to retake this survey? (Y for Yes, any key for no): ");
        fflush(stdin); // Reference 1 at top for source
        scanf("%c", &yesNo); // FIX THIS HERE!!!!
        printf("\n");
    } while (yesNo == 'Y' || yesNo == 'y');

    // Print Report
    printReport(topics, headers, responses, numberOfSurveys);


    /* Highest point tally */

    determineMax(responses, &maxTallyAmount, &maxPosition);
    printf("\nHighest Rated Topic\n%s - %d Votes", topics[maxPosition - 1], maxTallyAmount);
    //printf("\n\nFinal Max: %d", maxTallyAmount);
    // printf("\nPosition Title: %s", topics[maxPosition - 1]);

    // printf("\n\nFinal Min: %d", minTallyAmount);
    // printf("\nPosition Title: %s", topics[minPosition - 1]);
    //printReport(topics, headers, responses);
}

void printReport(char* titles[], char* marks[], int score[][10], int numSurvey)
{
    printf("----------------------- SURVEY RESULTS -----------------------------\n");

    printf("%27c", ' ');
    for (int i = 0; i < 11; i++)
    {
        printf("%s  ", *(marks + i));
    }

    printf("\n");

    printf("------------------------+-------------------------------+-----------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%23s |", titles[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%3d", score[i][j]);
        }
        // Average Score will go here
        printf("   %.1f\n", calculateAverageRating(score, numSurvey, i));

    }
}

double calculateAverageRating(int ratings[][10], int noOfSurvey, int index)
{
    int sum = 0;
    double average = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + (ratings[index][i] * (i + 1));
    }

    average = (double)sum / noOfSurvey;

    return average;
}

void determineMax(int arrayReponses[5][10], int* maximum, int* position)
{
    int holder[5] = { 0 };
    int sum = 0;
    int max;
    int i;
    int j;
    int holderMaxPosition;

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 10; j++)
        {
            sum = sum + (arrayReponses[i][j] * (j + 1));
        }
        holder[i] = sum;
        //printf("%d\n", sum);
    }

    // Determine highest
    for (i = 0; i < 5; i++)
    {
        if (holder[i] > max)
        {
            max = holder[i];
            holderMaxPosition = i + 1;
        }
    }

    *(maximum) = max; /* Set Max */
    *(position) = holderMaxPosition; /* Set position location */
}
