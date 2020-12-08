#include <stdio.h>

void determineMax(int arrayReponses[5][10], int* maximum, int* position);
void determineMin(int arrayReponses[5][10], int* minimum, int* position);

int main(void)
{
    char* topics[] = {
        "Medicare-For-All",
        "LGBT+ Equal Rights",
        "Universal Basic Income",
        "Free College (4 Yr)",
        "DACA"
    };

    int maxTallyAmount;
    int maxPosition;
    int minTallyAmount;
    int minPosition;

    int responses[5][10] =
    {
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
    };

    determineMax(responses, &maxTallyAmount, &maxPosition);
    determineMin(responses, &minTallyAmount, &minPosition);
    printf("\n\nFinal Max: %d", maxTallyAmount);
    printf("\nPosition Title: %s", topics[maxPosition - 1]);

    printf("\n\nFinal Min: %d", minTallyAmount);
    printf("\nPosition Title: %s", topics[minPosition - 1]);
    return 0;
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
        printf("%d\n", sum);
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

void determineMin(int arrayReponses[5][10], int* minimum, int* position)
{
    int holder[5] = { 0 };
    int sum = 0;
    int min;
    int i;
    int j;
    int holderMinPosition;

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 10; j++)
        {
            sum = sum + (arrayReponses[i][j] * (j + 1));
        }
        holder[i] = sum;
        printf("%d\n", sum);
    }

    // Determine lowest
    for (i = 0; i < 5; i++)
    {
        if (holder[i] < min)
        {
            min = holder[i];
            holderMinPosition = i;
        }
    }

    *(minimum) = min; /* Set Min */
    *(position) = holderMinPosition; /* Set position location */
}